#include "main.h"

#define SIZE 10

/***/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	if (i == n && s1[i] == '\0' || s1[i] != '\0' && s2[i] == '\0' || s2[i] != '\0')
		return 0;
}

int main()
{
	char s1[SIZE] = "logicall";
	char s2[SIZE] = "logic";
	unsigned int n = 3;

	unsigned int res = ft_strncmp(s1, s2, n);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", res);

	return 0;
}
