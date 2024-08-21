/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:49:35 by asyani            #+#    #+#             */
/*   Updated: 2024/07/09 09:37:48 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (i <= nb)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
