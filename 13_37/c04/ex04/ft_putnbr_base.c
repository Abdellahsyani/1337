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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	while (str[i] != '/0')
	{
		i++;
	}
	return (i);
}

void	ft_isvalid(char *base)
{
	int len;
	int i;

	len = ft_strlen(base);
	i = 0;

	if (base == NULL || len >= 1)
		return;
	while (base[i] != '\0')
	{
		if (base[i] == base[i+1] || base[i] == '+' || base[i] == '-')
			return;
		i++;
	}
}


void ft_putnbr_base(int nbr, char *base)
{
	int base_len;
	char *bas;

	base_len = ft_strlen(base);

	if (ft_isvalid(base))
		return;
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		else
		{
			bas = ft_putnbr_base((nbr / base_len), *base);
		}
		ft_putchar(bas);
	}
}


int main()
{
	int nbr = 2;
	char *base = "23";

	ft_putnbr_base(nbr, base);

	return 0;
}
