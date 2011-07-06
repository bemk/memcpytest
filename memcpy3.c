#include <stdio.h>
#include <stdlib.h>

#include "vars.h"

memcpy1(to, from, count)
register char *to, *from;
register count;
{
  do {                          /* count > 0 assumed */
    *to++ = *from++;            /* Note that the ''to'' pointer is NOT incremented */
  } while (--count > 0);
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