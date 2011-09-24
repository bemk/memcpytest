#include <stdio.h>
#include <stdlib.h>

#include "vars.h"

#define X86
void memcpy1(void *dest, void *src, size_t count)
{
  if(!count){return;}
  int diff = abs( (long)(dest - src) );
#ifndef X86 //64 bit int is only faster at X86, X64 prefers 2 time 32 int
  if( diff >= 8)
    while(count >= 8){ *(unsigned long long*)dest = *(unsigned long long*)src; dest += 8; src += 8; count -= 8; }
  if( (diff >= 4) && (count >= 4) )
    while(count >= 4){ *(unsigned long long*)dest = *(unsigned long long*)src; dest += 4; src += 4; count -= 4; }
#else
  if( diff >= 4)
    while(count >= 4){ *(unsigned int*)dest = *(unsigned int*)src; dest += 4; src += 4; count -= 4; }
#endif
  if( (diff >= 2) && (count >= 2) ) 
    while(count >= 2){ *(unsigned long long*)dest = *(unsigned long long*)src; dest += 2; src += 2; count -= 2; }
  if( (diff >= 1) && (count = 1) ) 
    while(count >= 1){ *(unsigned long long*)dest = *(unsigned long long*)src; dest += 1; src += 1; count -= 1; }
  return;
}

int main()
{
  char* src = malloc (SIZE);
  char* dst = malloc (SIZE);
  
  if (src == NULL || dst == NULL)
    return -1;
  
  long long i;
  for (i = 0; i < TIMES; i++)
  {
    memcpy1(dst, src, SIZE);
  }
  return 0;
}