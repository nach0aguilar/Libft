/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:30:36 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/23 17:50:33 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new;
	unsigned int	i;
	unsigned int	j;
	unsigned int	newlen;

	i = 0;
	j = 0;
	newlen = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(sizeof(char) * newlen + 1);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		j++;
		i++;
	}
	new[i] = '\0';
	return (new);
}

// int main()
// {
//     char string1[] = "hola ";
//     char string2[] = "que tal";

//     printf("%s\n", ft_strjoin(string1, string2));
// }