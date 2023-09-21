/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:58:52 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/21 20:01:31 by igaguila         ###   ########.fr       */
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
	if (!(array = (char **)malloc(50 * sizeof(char *))))
		return (NULL);
	while (s[i])
	{
		if (!(array[x] = (char *)malloc(5)))
			return (NULL);
		while (!(s[i] == c || s[i] == '\0'))
			array[x][y++] = s[i++];
		while (s[i] == c || s[i] == '\0')
		{
			i++;
			x++;
			y = 0;
		}
		array[x][y] = 0;
		
	}
	array[x] = 0;
	return (array);
}

int	main(void)
{
	char string[] = " hola que tal";
	char **lista = ft_split(string, ' ');

	printf("%s\n", lista[0]);
	printf("%s\n", lista[1]);
	printf("%s\n", lista[2]);
}