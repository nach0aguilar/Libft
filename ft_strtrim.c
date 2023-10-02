/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*         ç                                           +:+ +:+
	+:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:46:52 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/20 17:47:31 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int	start(char const *str, char const *set)
{
	unsigned int	len;
	unsigned int	j;

	len = 0;
	j = 0;
	while (str[len])
	{
		while (set[j])
		{
			if (set[j] == str[len])
			{
				len++;
				j = 0;
			}
			else
				j++;
		}
		return (len);
	}
	return (len);
}

unsigned int	end(char const *str, char const *set)
{
	unsigned int	len;
	unsigned int	j;

	len = ft_strlen(str);
	while (len > 0)
	{
		j = 0;
		while (set[j] && len - 1 != 0)
		{
			if (set[j] == str[len - 1])
			{
				len--;
				j = 0;
			}
			else
				j++;
		}
		return (len);
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	trimstart;
	unsigned int	trimend;
	char			*trim;

	if (s1[0] == '\0')
		return (ft_strdup(""));
	if (set == NULL)
		return (ft_strdup(s1));
	trimstart = start(s1, set);
	trimend = end(s1, set);
	if (trimstart >= trimend)
		return (ft_strdup(""));
	trim = malloc(sizeof(char) * (trimend - trimstart + 1));
	if (!trim)
		return (NULL);
	i = 0;
	while (trimstart < trimend)
		trim[i++] = s1[trimstart++];
	trim[i] = '\0';
	return (trim);
}

// int main()
// {
//     char string[] = "s  d s  d";
//     printf("%s\n", ft_strtrim(string, " sd"));
// }