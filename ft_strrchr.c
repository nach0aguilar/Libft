/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:40:46 by igaguila          #+#    #+#             */
/*   Updated: 2023/10/02 21:20:57 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*newstring;
	char	chr;

	i = ft_strlen(s);
	chr = (char)c;
	newstring = (char *)s;
	while (i >= 0)
	{
		if (s[i] == chr)
			return (&newstring[i]);
		else
			i--;
	}
	return (NULL);
}
