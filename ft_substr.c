/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:59:15 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/21 00:24:27 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int    i;
    unsigned int    j;
    char            *new;

    i = 0;
    j = 0;
    if(!(new = malloc(sizeof(char)*(len + 1))) || !s)
        return (NULL);
    while(s[i])
    {
        if (i + 1 >= start && j < len)
        {
            new[j] = s[i];
            j++;
        }
        i++;
    }
    new[i] = '\0';
    return (new);
}

// int	main(void)
// {
// 	char string[] = "holografico";
// 	printf("%s\n", ft_substr(string, 0, 5));
// }