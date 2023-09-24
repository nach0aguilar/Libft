/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:59:15 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/24 23:58:40 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	//unsigned int	j;
	char			*new;

	i = 0;
	//j = 0;
	new = malloc(sizeof(char) * (len + 1));
	if (!new || !s)
		return (NULL);
	// while (s[i])
	// {
	// 	if (i >= start && j < len)
	// 	{
	// 		new[j] = s[i];
	// 		j++;
	// 	}
	// 	i++;
	// }
	while (start < ft_strlen(s) && len--)
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}

// int	main(void)
// {
// 	char string[] = "lorem ipsum dolor";
// 	printf("%s\n", ft_substr(string, 0, 10));
// }