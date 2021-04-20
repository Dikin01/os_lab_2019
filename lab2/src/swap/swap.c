#include <stdio.h>
#include "swap.h"

void Swap(char *left, char *right)
{  
	char buff = *right;
  *right = *left;
  *left = buff;
}
