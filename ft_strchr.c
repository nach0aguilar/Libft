/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:32:47 by igaguila          #+#    #+#             */
/*   Updated: 2023/10/02 21:17:20 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*newstring;
	char	chr;

	i = 0;
	chr = (char)c;
	newstring = (char *)s;
	while (s[i])
	{
		if (s[i] == chr)
			return (&newstring[i]);
		else
			i++;
	}
	if (newstring[i] == chr)
		return (&newstring[i]);
	return (NULL);
}
