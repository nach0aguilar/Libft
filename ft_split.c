/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:58:52 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/26 12:18:57 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	words(char const *s, char c)
{
	int	words;
	int inword;
	int i;
	
	words = 0;
	inword = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && inword == 0)
		{
			inword = 1;
			words++;
		}
		else if (s[i] == c)
			inword = 0;
		i++;
	}
	return (words);
}

static char *make_word(char const *s, char c, int pos)
{
	int i;
	int j;
	char *str;
	
	j = 0;
	i = pos;
	while (s[pos] != c)
		pos++;
	
	str = malloc(sizeof(char) * (pos - i + 1));
	if(!str)
		return (0);
	while (s[i] != c)
		str[j++] = s[i++];
	return (str);	
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		j;
	char	**array;

	i = 0;
	j = 0;
	array = (char **)malloc(sizeof(char *) * (words(s, c) + 1));
	if (!array || !s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			array[j] = make_word(s, c, i);
			i += ft_strlen(array[j++]);
		}
	}
	array[j] = 0;
	return (array);
}

// int	main(void)
// {
// 	char string[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
// 	char **lista = ft_split(string, ' ');
// 	int i = 0;

// 	while (lista[i])
// 	{
// 		printf("%s\n", lista[i]);
// 		i++;
// 	}
// }