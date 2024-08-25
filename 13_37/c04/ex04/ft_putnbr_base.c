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

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_isvalid(char *base)
{
	int len;
	int i;
	int j;

	len = ft_strlen(base);
	i = 0;

	if (base == NULL || len <= 1)
		return 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || (base[i] <= 32 || base[i] >= 127))
			return 0;
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}


void ft_putnbr_base(int nbr, char *base)
{
	unsigned int base_len;
	unsigned int  nb;


	base_len = ft_strlen(base);
	if (!ft_isvalid(base))
		return;
	nb = nbr;
	if (ft_isvalid(base))
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= base_len)
		{
			ft_putnbr_base((nb / base_len), base);
		}
		ft_putchar(base[nb % base_len]);
	}
}
