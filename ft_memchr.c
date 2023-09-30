/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:13:36 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/30 12:00:21 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	size_t			i;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == chr)
			return (&str[i]);
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