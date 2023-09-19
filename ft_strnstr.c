/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:10:09 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/19 15:22:06 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
        char    *sbig;
        char    *slittle;
        size_t  i;
        size_t  j;

        sbig = (char *)big;
        slittle = (char *)little;
        i = 0;
        while (sbig[i] && i < len)
        {
            j = 0;
            if (sbig[i] == slittle[j])
            {
                while (sbig[i] == slittle[j])
                {
                    if (j == ft_strlen(slittle))
                        return(&sbig[i - j]);
                    i++;
                    j++;
                }
                i -= j;
                i++;
            }
        }
        return (NULL);
}

int main()
{
    char *bigs = "hola soy ManManolo";
    char *lits = "a";
    
    char *resultado = strnstr(bigs, lits, 18);

    if(resultado != NULL)
	    printf("%s\n", resultado);
    else
        printf("Nulo\n");
}