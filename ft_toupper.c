/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:52:18 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/17 19:12:14 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        return (c - 32);
    else
        return (c);
}

int main()
{
    printf("%c", ft_toupper('a'));
}