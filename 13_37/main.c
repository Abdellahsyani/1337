/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:10:44 by asyani            #+#    #+#             */
/*   Updated: 2024/07/05 13:36:46 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av) 
{
    int i = 0;
	int j = 0;
	int k = 0;

	char *ar1 = av[1];
	char *ar2 = av[2];
	char *ar3 = av[3];

	if (ac == 3)
	{
		while (ar1[i] != '\0')
		{
			i++;
		}
		while (ar2[j] != '\0')
		{
			j++;
		}
		while (ar3[k] != '\0')
		{
			k++;
		}
		if (ar1[i + j] == ar2[j])
		{
			ar1[i] = ar3[k];
		}
		ft_putchar(ar1[i]);
	}
	else
		ft_putchar('\n');

    return 0;
}
