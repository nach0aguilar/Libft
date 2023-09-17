/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:32:47 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/17 21:27:17 by igaguila         ###   ########.fr       */
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
	
    newstring = (char *)s;
	while (s[i])
	{
		j = 0;
		if (s[i] == c)
		{
			while (s[i - 1])
			{
				newstring[j] = s[i];
				j++;
				i++;
			}
			newstring[i] = '\0';
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
	printf("%s\n", ft_strchr(string, 'o'));
}