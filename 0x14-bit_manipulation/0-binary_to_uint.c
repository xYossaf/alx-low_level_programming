#include "main.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
* binary_to_uint - Binary to unit converstion
* @b: the binary string
*
* Return: the converted unit or zero if it fails
*/
unsigned int binary_to_uint(const char *b)
{
int res = 0;
int non1and0 = 0;
int i;

for (i = strlen(b) - 1; i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
{
non1and0 = 1;
break;
}
if (b[i] == '1')
{
res += pow(2, strlen(b) - i - 1);
}
}


if (non1and0 == 0)
{
return (res);
}
else
{
return (0);
}
}
