/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:11:04 by asyani            #+#    #+#             */
/*   Updated: 2024/06/30 11:11:16 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char *c)
{
    write(1, &c, 1);
}

void    ft_yassir(int m, char a, char b)
{
    int    i;

    i = 0;
    while (i < m)
    {
        if (i == 0)
        {
            ft_putchar(a);
            i++;
        }
        while (i < (m - 1))
        {
            ft_putchar(b);
            i++;
        }
        if (i == (m - 1))
            ft_putchar(a);
        i++;
    }
    ft_putchar('\n');
}

void    rush(int x, int y)
{
    int    i;

    i = 0;
    while (i < y)
    {
        if (i == 0)
            ft_yassir(x, 'o', '-');
        else if (i < (y - 1))
            ft_yassir(x, '|', ' ');
        else if (i == (y - 1))
            ft_yassir(x, 'o', '-');
        i++;
    }
    ft_putchar('\n');
}
int main()
{
    rush(,1);
}
