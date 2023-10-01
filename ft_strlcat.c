/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:54:21 by igaguila          #+#    #+#             */
/*   Updated: 2023/10/01 22:51:42 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;
	size_t	size_result;

	i = 0;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	if (size > dst_size)
		size_result = dst_size + src_size;
	else
		size_result = src_size + size;
	while ((i + dst_size < size - 1) && src[i])
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (size_result);
}

// int main()
// {
// 	char source[] = "nacho";
// 	char dest[] = "hola";

// 	ft_strlcat(dest, source, 2);

// 	printf("%s\n", dest);
// }
