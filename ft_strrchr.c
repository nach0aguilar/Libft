/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:40:46 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/24 15:09:16 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*newstring;

	i = ft_strlen(s);
	newstring = (char *)s;
	while (i >= 0)
	{
		if (s[i] == c)
			return (&newstring[i]);
		else
			i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char string[] = "teste";
// 	printf("%s\n", ft_strrchr(string, '\0'));
// }