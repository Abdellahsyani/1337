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

long	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

int	ft_isvalid(char *str)
{
	int		i;
	int		j;
	long	base_len;

	i = 0;
	if (!str || str[0] == '\0')
		return (0);
	base_len = ft_strlen(str);
	if (base_len <= 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+' || (str[i] <= 32 || str[i] >= 127))
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long			base_len;
	int				i;
	long int		nb;

	i = 0;
	nb = nbr;
	base_len = ft_strlen(base);
	if (!ft_isvalid(base))
		return ;
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
