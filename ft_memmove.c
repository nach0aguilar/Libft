/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:47:06 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/25 22:44:30 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char *newdst;
	unsigned char *newsrc;

	newdst = (unsigned char *)dest;
	newsrc = (unsigned char *)src;
    
    i = n;
    if(!newdst && !newsrc)
		return (0);
    if (src > dest)
        ft_memcpy(dest, src, n);
    else
    {
        while (i > 0)
        {
            i--;
            newdst[i] = newsrc[i];
        }
    }
    return (newdst);
}