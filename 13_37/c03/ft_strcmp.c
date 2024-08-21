#include "main.h"

/**
 * ft_strcmp - compare two string
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the different vaue between two string
 */

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	int res1, res2;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] == s2[i])
		return 0;
	else
		return (s1[i] - s2[i]);
}
