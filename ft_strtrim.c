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

char    *ft_strtrim(char const *s1, char const *set)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    len;
    char            *trim1;
    char            *trim2;

    i = 0;
    len = ft_strlen(s1);
    while(s1[i])
    {
        while(set[j])
        {
            if(set[j] == s1[i])
                i++;
            else
                j++;
        }
        
    }
    while(len > 0)
    {

    }
}