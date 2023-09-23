/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:54:21 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/23 17:19:04 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

// size_t  ft_strlen(const char *str)
// {
//     size_t i;

//     i = 0;
//     while (str[i])
//         i++;
//     return(i);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;

	i = 0;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	while ((i + dst_size < size - 1) && src[i])
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst_size + i);
}

/*int main()
{
	char source[] = "hola";
	char dest[] = "adios";

	ft_strlcat(dest, source, 3);

	printf("%s\n", dest);
}*/