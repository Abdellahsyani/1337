/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_miror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:36:35 by asyani            #+#    #+#             */
/*   Updated: 2024/07/12 08:27:59 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


int	main(int argc, char **argv)
{
	int	i = 0;
	int index;
	int ind;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				index = argv[1][i] - 'a';
				ft_putchar('z' - index);
			}
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				ind = argv[1][i] - 'A';
				ft_putchar('Z' - ind);
			}
			else if (argv[1][i] == ' ')
				ft_putchar(' ');
			i++;
		}
	}
	return (0);
}

