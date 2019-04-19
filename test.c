#include <stdio.h>
//echo makes a new line. so on fd[0] take care of newline! 
//however when md5 reads from file, newlines are skipped so use gnl
#include <fcntl.h>
#include <wchar.h>
#include <locale.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <time.h>
#include <limits.h>
#include "tester/libft/libft.h"


unsigned long long super_power(unsigned long long base, unsigned long long ex)
{
	unsigned long long res;
	res = 1;
	while (ex--)
		res *= base;
	return (res);
}
int main() 
{ 

	char *s;

	s = malloc(2);
	unsigned long long len = 256 + 65;
	s[0] = len;
	s[1] = '\0';
	//printf("%llu", len);
	printf("%s\n",s);
}

