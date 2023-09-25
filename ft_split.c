/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:58:52 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/25 22:49:44 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *make_word(char const *s, char c, int pos)
{
	char *str;
	
	
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;

	i = 0;
	j = 0;
	array = (char **)malloc(50 * sizeof(char *));
	if (!array)
		return (NULL);
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
	//array[x] = 0;
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