/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*         ç                                           +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:46:52 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/20 17:47:31 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"


char    *start(char const *str, char const *set)
{
    unsigned int    i;
    unsigned int    j;
    char            *newstr;

    newstr = (char *)str;
    i = 0;
    while(newstr[i])
    {
        while(set[j])
        {
            if(set[j] == newstr[i])
            {
                i++;
                j = 0;
            }
            else
                j++;
        }
        return(&newstr[i]);
    }
    return (NULL);
}

unsigned int    end(char *str, char const *set)
{
    unsigned int    len;
    unsigned int    j;

    len = ft_strlen(str);
    j = 0;
    while (len + 1 > 0)
    {
        while (set[j])
        {
            if (set[j] == str[len - 1])
            {
                len--;
                j = 0;
            }
            else
                j++;
        }
        return(len);
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    unsigned int    i;
    char            *trimstart;
    unsigned int    trimend;
    char            *trim;

    trimstart = start(s1, set);
    trimend = end(trimstart, set);
    if(!(trim = malloc(sizeof(char) * (trimend + 1))))
        return(NULL);
    i = 0;
    while (i < trimend)
    {
        trim[i] = trimstart[i];
        i++;
    }
    trim[i] = '\0';
    return(trim);
}

int main()
{
    char string[] = "sdkholaksd";
    printf("%s\n", ft_strtrim(string, "sd"));
}