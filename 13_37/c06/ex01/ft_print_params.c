/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:59:44 by asyani            #+#    #+#             */
/*   Updated: 2024/07/10 13:13:27 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	ac;
	int	i;

	ac = 1;
	while (ac < argc)
	{
		i = 0;
		while (argv[ac][i] != '\0')
		{
			ft_putchar(argv[ac][i]);
			i++;
		}
		ft_putchar('\n');
		ac++;
	}
	return (0);
}
