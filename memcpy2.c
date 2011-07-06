#include <stdio.h>
#include <stdlib.h>

#include "vars.h"

void memcpy1(void *destination, void* source, size_t num)
{
  int i = 0;
  unsigned char* src = source;
  unsigned char* dst = destination;
  for (; i < num; i++)
  {
    *(dst+i) = *(src+i);
  }
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