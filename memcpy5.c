#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "vars.h"

int main()
{
  char* src = malloc (SIZE);
  char* dst = malloc (SIZE);
  if (src == NULL || dst == NULL)
    return -1;
  long long i;
  for (i = 0; i < TIMES; i++)
  {
    memcpy(dst, src, SIZE);
  }
  return 0;
}