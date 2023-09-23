/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:58:52 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/23 17:49:04 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	int		i;
	int		x;
	int		y;
	char	**array;

	i = 0;
	x = 0;
	y = 0;
	array = (char **)malloc(50 * sizeof(char *));
	if (!array)
		return (NULL);
	while (s[i])
	{
		array[x] = (char *)malloc(5);
		if (!array[x])
			return (NULL);
		if (s[0] == c)
			i++;
		while (!(s[i] == c || s[i] == '\0'))
			array[x][y++] = s[i++];
		if (s[i] == c && s[i - 1] != c)
		{
			array[x][y] = 0;
			x++;
			y = 0;
			i++;
		}
		if (s[i] == c)
			i++;
	}
	array[x][y] = 0;
	array[++x] = 0;
	return (array);
}

// int	main(void)
// {
// 	char string[] = "hola que tal como estas";
// 	char **lista = ft_split(string, ' ');
// 	int i = 0;

// 	while (lista[i])
// 	{
// 		printf("%s\n", lista[i]);
// 		i++;
// 	}
// }