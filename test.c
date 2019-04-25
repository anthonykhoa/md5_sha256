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

uint32_t reverseBits(uint32_t num) 
{ 
    uint32_t count = sizeof(num) * 8; 
    uint32_t reverse_num = num & 1; 
     
    num >>= 1;
    count--;
   	while (num)
   	{	
   		reverse_num <<= 1;
   		reverse_num |= num & 1;
   		num >>= 1;
   		count--;
   	}
   	reverse_num <<= count;
   	return (reverse_num);
} 
 
// void	print_bits(uint32_t num) {
// 	unsigned char bit;
// 	int i = sizeof(uint32_t) * 8;
// 	while (i--)
// 	{
// 		bit = (num >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// }

unsigned char *pad_message(char *str, size_t len)
{
	size_t	i;
	size_t	j;
	unsigned char	*l;

	i = 1;
	while (len + i % 64 != 56)
		i++;
	l = ft_memalloc(sizeof(unsigned char) * (len + i + 1 + 8));
	j = -1;
	while (str[++j])
		l[j] = str[j];
	l[j++] = 0x80;
	i = 8;
	len *= 8;
	while (i)
		l[j++] = len >> (8 * (8 - i--));
	return (l);
}

int main() 
{ 

	char *str;
	//char *l;

	str = "01234567";
	//l = pad_message(str, ft_strlen(str));
	//printf("%s\n", l);
	printf("%s", pad_message(str, 8));
}

