/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:38:31 by asyani            #+#    #+#             */
/*   Updated: 2024/07/03 14:33:31 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	length;

	n = 0;
	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	if (size == 0)
	{
		return (length);
	}
	while (src[n] != '\0' && n < size - 1)
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (length);
}
