/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:13:36 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/23 17:16:14 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return (&str[i]);
		else
			i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char string[] = "holografico";
//     char *newstring = ft_memchr(string, 'o', 6);

//     if(newstring != NULL)
// 		 printf("%s\n", newstring);
//     else
//         printf("Nulo\n");
// }