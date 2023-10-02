/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:10:09 by igaguila          #+#    #+#             */
/*   Updated: 2023/10/02 12:10:26 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[i])
		return ((char *)&big[i]);
	while (big[i])
	{
		j = 0;
		while (big[i] == little[j] && i < len && big[i])
		{
			i++;
			j++;
		}
		if (!little[j])
			return ((char *)&big[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}

// int main()
// {
//     char *bigs = "lorem dsvndfjvnds sdjvsdjcvdsk";
//     char *lits = "lore";

//     char *resultado = ft_strnstr(bigs, lits, 4);

//     if(resultado != NULL)
// 			printf("%s\n", resultado);
//     else
//         printf("Nulo\n");
// }