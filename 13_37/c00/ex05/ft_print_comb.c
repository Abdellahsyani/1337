/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:02:25 by asyani            #+#    #+#             */
/*   Updated: 2024/06/27 10:29:10 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int i, int j, int k)
{
	char	c;
	char	c1;
	char	c2;

	c = '0' + i;
	c1 = '0' + j;
	c2 = '0' + k;
	ft_putchar(c);
	ft_putchar(c1);
	ft_putchar(c2);
}

void	space_comm(int n)
{
	if (n != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_print(i, j, k);
				space_comm(i);
				k++;
			}
			j++;
		}
		i++;
	}
}
