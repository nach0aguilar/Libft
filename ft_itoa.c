/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:28:38 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/26 23:32:27 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int digits_number(int n)
{
	int	i;
	
	i = 0;
	if (n < 0)
		n *= -1;
	
	while (n > 0)
	{
		n /= 10;
		i++;
	}	
	
	return (i);
}

char    *ft_itoa(int n)
{
    int     i;
	int		digits;
    char    *str;
	
	digits = digits_number(n);
	i = digits;
	if (n < 0)
	{
		digits++;
		str[i] = "-";
		n *= -1;
		i++;
	}
	str = malloc(sizeof(char) * (digits + 1));
	if (!str)
		return (0);
	
	while (n > 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}