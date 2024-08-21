/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 08:19:26 by asyani            #+#    #+#             */
/*   Updated: 2024/07/03 11:58:20 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (c);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	capitalize = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) || (str[i] >= 48 && str[i] <= 57))
		{
			if (capitalize && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			else if (!capitalize && str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
			capitalize = 0;
		}
		else
			capitalize = 1;
		i++;
	}
	return (str);
}
