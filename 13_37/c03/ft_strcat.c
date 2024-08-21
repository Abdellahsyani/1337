#include "main.h"

/**
 * ft_strcat - this function concatenat strings
 * @dest: the first string
 * @src: the second string
 *
 * Return: the concat string
 */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;
	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return dest;
}
