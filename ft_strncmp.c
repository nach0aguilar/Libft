/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:53:47 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/23 17:19:27 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (s1[i]) && (s2[i]) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

// int main()
// {
//     char string1[] = "hola que tal";
//     char string2[] = "hola que tal";

//     printf("%d\n", strncmp(string1, string2, 3));
// }