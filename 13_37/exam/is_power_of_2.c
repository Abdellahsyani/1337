/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 08:48:51 by asyani            #+#    #+#             */
/*   Updated: 2024/07/12 08:59:14 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 0;

	while (i < n)
	{
		if (i * i == n)
			return (1);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	unsigned int i = 11;
	printf("%d\n", is_power_of_2(i));

	return (0);
}
