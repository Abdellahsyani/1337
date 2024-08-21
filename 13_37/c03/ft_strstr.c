#include "main.h"
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i = 0, j;

	if (to_find[0] == '\0')
		return str;

	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return &str[i];
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return NULL;
}
