/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:23:31 by asyani            #+#    #+#             */
/*   Updated: 2024/06/30 10:44:01 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_width(int x)
{
	int	i;

	ft_putchar('o');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_height(int x, int y)
{
	int	j;
	int	i;

	j = 0;
	while (j <  y - 2)
	{
		if (x > 0)
		{
			ft_putchar('|');
		}
		i = 0;
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		if (x > 1)
		{
			ft_putchar('|');
		}
		ft_putchar('\n');
		j++;
	}
}

void	rush(int x, int y)
{
	if (y > 0)
	{
		ft_width(x);
	}
	ft_height(x, y);
	if (y > 1)
	{
		ft_width(x);
	}
}
