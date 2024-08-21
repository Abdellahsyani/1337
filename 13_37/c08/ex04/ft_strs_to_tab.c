/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:48:03 by asyani            #+#    #+#             */
/*   Updated: 2024/07/17 09:20:04 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*dup;

	i = 0;
	length = ft_strlen(src);
	dup = malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*range;

	range = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		range[i].size = ft_strlen(av[i]);
		range[i].str = av[i];
		range[i].copy = ft_strdup(av[i]);
		if (range[i].copy == NULL)
			return (NULL);
		i++;
	}
	range[i].size = 0;
	range[i].str = NULL;
	range[i].copy = NULL;
	return (range);
}
