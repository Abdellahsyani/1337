/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:51:39 by asyani            #+#    #+#             */
/*   Updated: 2024/07/03 17:12:32 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	is_printable(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (c);
	}
	return (0);
}

void	to_hex(int n)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex_digits[n / 16]);
	ft_putchar(hex_digits[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_printable(str[i]))
		{
			ft_putchar(str[i]);
		}
		else
		{
			to_hex((unsigned char)str[i]);
		}
		i++;
	}
}
