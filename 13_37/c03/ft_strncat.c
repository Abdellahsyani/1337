#include "main.h"

/***/

int count_len(char *dest)
{
	unsigned int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return i;
}

/***/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int len;
	
	i = 0;
	len = count_len(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';

	return dest;
}

int main()
{
	char dest[50] = "hello";
	char src[] = " world";

	ft_strncat(dest, src, 4);
	printf("%s\n", dest);

	return 0;
}
