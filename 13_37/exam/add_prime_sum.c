/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 09:34:17 by asyani            #+#    #+#             */
/*   Updated: 2024/07/11 13:28:19 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 2)
		return (1);
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	sum;
	int	j;

	sum = 0;
	i = 3;
	j = 0;
	if (argc == 1)
	{
		while (i < argv[1][j])
		{
			if (ft_is_prime(argv[1][j]))
				sum = sum + i;
			i+=2;
		}
		if (argv[1][j] > 9)
			ft_putchar(sum / 10 + '0');
		ft_putchar(sum % 10 + '0');
	}
	return (0);
}
