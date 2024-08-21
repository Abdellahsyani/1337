/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:25:34 by asyani            #+#    #+#             */
/*   Updated: 2024/06/29 15:37:05 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		start;
	int		end;
	int		swap;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		swap = tab[start];
		tab[start] = tab[end];
		tab[end] = swap;
		start++;
		end--;
	}
}
