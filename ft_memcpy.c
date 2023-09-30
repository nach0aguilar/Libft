/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:39:23 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/30 17:46:22 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*newdst;
	unsigned char	*newsrc;

	newdst = (unsigned char *)dest;
	newsrc = (unsigned char *)src;
	i = 0;
	if (!newdst && !newsrc)
		return (0);
	while (i < n)
	{
		newdst[i] = newsrc[i];
		i++;
	}
	return (newdst);
}

// int	main(void)
// {
// 	char str[100] = "Learningisfun";
// 	char *first, *second;
// 	first = str;
// 	second = str;
// 	memmove(first + 8, str, 10);
// 	puts(first);
// 	memcpy(second + 8, str, 10);
// 	puts(second);
// }

// int main()
// {
//     char str[100] = "Learningisfun";
//     char *first, *second;
//     first = str;
//     second = str;
//     printf("Original string :%s\n ", str);

//     // when overlap happens then it just ignore it
//     memcpy(first + 8, first, 10);
//     printf("memcpy overlap : %s\n ", str);

//     // when overlap it start from first position
//     memmove(second + 8, first, 10);
//     printf("memmove overlap : %s\n ", str);

//     return (0);
// }