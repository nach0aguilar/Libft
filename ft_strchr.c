/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:32:47 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/17 19:54:18 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*newstring;

	i = 0;
	j = 0;
    newstring = "";
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i])
			{
				newstring[j] = s[i];
				j++;
				i++;
			}
			return (newstring);
		}
		else
			i++;
	}
	return (NULL);
}

int	main(void)
{
	char string[] = "holografico";
	printf("%s", ft_strchr(string, 'o'));
}