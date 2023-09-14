/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:43:13 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/14 18:21:17 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
        return(1);
    else
        return (0);
}

int main()
{
    char caracter = 'e';
    
    printf("%d", ft_isascii(caracter));
}