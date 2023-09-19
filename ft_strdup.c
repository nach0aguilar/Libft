/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:20:27 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/19 23:36:28 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char    *ft_strdup(const char *s)
{
    int     i;
    char    *copy;

    i = 0;
    if(!(copy = malloc(sizeof(char)*ft_strlen(s))))
        return(NULL);
    while(str[i])
    {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';
    return(copy);
}

