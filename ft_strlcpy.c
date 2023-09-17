/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:13:32 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/17 16:19:24 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;

    j = 0;
    while
    
    i = 0;
    while (i < size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (sizeof(src));
}

int main()
{
    char source[] = "Hola que tal";
    char dest[15];

    strlcpy(dest, source, sizeof(dest));

    printf("%s\n", dest);
}

