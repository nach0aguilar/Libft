/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:40:46 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/20 09:19:48 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t  ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*newstring;

	i = ft_strlen(s);
	
    newstring = (char *)s;
	while (i >= 0)
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
			i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char string[] = "holografico";
// 	printf("%s\n", strrchr(string, 'a'));
// }