/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:50:21 by asyani            #+#    #+#             */
/*   Updated: 2024/07/07 20:43:01 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * ft_putchar - the function to print the character
 * @c: the character tha we will print
 *
 */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * ft_strlen - count length function
 * @str: the string that we will count thier length
 *
 * Return: length of string
 */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * check - checking for valid base
 * @base: the string that we will check
 *
 * Return: 0 if fail 1 if success
 */
int	check(char *base)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(base);

	if (len == 1)
		return (0);

	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		int	j;

		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/**
 * ft_atoi_base - the atoi_base function convert any base to decimal
 * @str: the string number that we will convert
 * @base: the base of the str
 *
 * Return: the converted base Decimal
 */
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	base_len;
	int	result;
	int	digit;

	i = 0;
	result = 0;

	if (!check(base))
		return (0);
	base_len = ft_strlen(base);

	while (str[i] != '\0')
	{
		digit = 0;
		while (digit < base_len && base[digit] != str[i])
			digit++;
		if (digit == base_len)
			return (0);
		result = result * base_len + digit;
		i++;
	}
	return (result);
}
