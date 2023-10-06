#include "revert_string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void RevertString(char *str)
{
	char *res;
	int length;
	length = strlen(*str);
	for (i = length-1; i >= 0; i--){
		res += str[i];
	}
	return res
}

