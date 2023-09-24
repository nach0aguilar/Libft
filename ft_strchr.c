/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:32:47 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/24 12:46:20 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*newstring;

	i = 0;
	newstring = (char *)s;
	while (s[i])
	{
		if (s[i] == c)
			return (&newstring[i]);
		else
			i++;
	}
	if (newstring[i] == c)
		return(&newstring[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char string[] = "bonjour";
// 	printf("%s\n", ft_strchr(string, 'b'));
// }