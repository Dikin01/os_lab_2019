#include "revert_string.h"
#include "string.h"
#include "stdio.h"

extern void Swap(char* left, char* right)
{
	char buff = *right;
	*right = *left;
	*left = buff;
}

extern void RevertString(char *str)
{
  int N = strlen(str)-1;
	for (int i = 0; i < (N+1)/2; i++) {		
		Swap(&str[i], &str[N - i]);
	}	
}

