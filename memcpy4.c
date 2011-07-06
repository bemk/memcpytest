#include <stdio.h>
#include <stdlib.h>

#include "vars.h"

#define memcpy1(a,b,c) memcpy2((char*)a,(char*)b,c)

memcpy2(to, from, count)
register char *to, *from;
register count;
{
        register n=(count+7)/8;
        switch(count%8){
        case 0:      do{      *to++ = *from++;
        case 7:              *to++ = *from++;
        case 6:              *to++ = *from++;
        case 5:              *to++ = *from++;
        case 4:              *to++ = *from++;
        case 3:              *to++ = *from++;
        case 2:              *to++ = *from++;
        case 1:              *to++ = *from++;
                }while(--n>0);
        }
}

int main()
{
  short* src = malloc (SIZE);
  short* dst = malloc (SIZE);
  if (src == NULL || dst == NULL)
    return -1;
  long long i;
  for (i = 0; i < TIMES; i++)
  {
    memcpy1(dst, src, SIZE);
  }
  return 0;
}