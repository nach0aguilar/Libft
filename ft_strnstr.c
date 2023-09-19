/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:10:09 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/19 10:33:14 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// char    *ft_strnstr(const char *big, const char *little, size_t len)
// {
    
// }

int main()
{
    char *ciudades = "madrid malaga sevilla aragon cadiz";
    char *ciudad = "malaga";
    
    char *resultado = strnstr(ciudades, ciudad, 23);

    if(resultado != NULL)
	    printf("%s\n", resultado);
    else
        printf("Nulo\n");
}