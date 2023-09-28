/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:24:33 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/28 13:22:00 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr_fd(int n, int fd)
{
    long int    nbr;
    int         i;
    int         signo;

    nbr = n;
    if (nbr < 0)
    {
        write(fd, '-', 1);
        nbr *= -1;
    }
    if (nbr < 10)
        ft_putchar_fd(nbr + '0', fd);
    if (nbr >= 10)
    {
        while (nbr > 0)
        {
            ft_putchar_fd(n % 10 + '0', fd);
            n /= 10;
        }
    }
        
    while(n >)
}