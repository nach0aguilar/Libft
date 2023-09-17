/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:21:14 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/17 18:13:33 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*newstr;

	i = 0;
	newstr = (unsigned char *)b;
	while (i < len)
	{
		newstr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char string[50];
	strcpy(string, "caldodepollo");
	puts(string);
	ft_memset(string, 'c', 5);
	puts(string);
}*/