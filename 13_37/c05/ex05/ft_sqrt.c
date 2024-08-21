/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:30:37 by asyani            #+#    #+#             */
/*   Updated: 2024/07/09 11:47:03 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	sq;

	sq = 0;
	i = 0;
	while (i < nb)
	{
		sq = i * i;
		if (sq == nb)
			return (i);
		i++;
	}
	return (0);
}
