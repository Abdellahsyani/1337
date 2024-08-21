/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:47:07 by asyani            #+#    #+#             */
/*   Updated: 2024/07/12 08:29:30 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int i = 0;
	int nb = 0;
	int sign = 1;

	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + str[i] - '0';
		i++;
	}
	return nb * sign;
}

int	main(int argc, char **argv)
{
	int	num;
	int num1;

	if (argc == 4)
	{
		num = ft_atoi(argv[1]);
		num1 = ft_atoi(argv[3]);
		if (argv[2][0] == '-')
			printf("%d\n", num - num1);
		else if (argv[2][0] == '*')
			printf("%d\n", num * num1);
		else if (argv[2][0] == '+')
			printf("%d\n", num + num1);
		else if (argv[2][0] == '/')
		{
			if (num1 == 0)
				
			printf("%d\n", num / num1);
		}
	}
	else 
		write(1, "\n", 1);
	return (0);
}
