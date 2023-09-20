/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:54:55 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/18 19:19:09 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    const unsigned char *str1;
    const unsigned char *str2;

    i = 0;
    str1 = (unsigned char*)s1;
    str2 = (unsigned char*)s2;
    while ((i < n) && (str1[i]) && (str2[i]) && (str1[i] == str2[i]))
        i++;
    return(str1[i] - str2[i]);
}

// int main()
// {
//     char string1[] = "hola que tal";
//     char string2[] = "hoaa que tal";
    
//     printf("%d\n", ft_memcmp(string1, string2, 3));
// }