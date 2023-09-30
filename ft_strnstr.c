/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:10:09 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/30 17:59:58 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*sbig;
	char	*slittle;
	size_t	i;
	size_t	j;

	sbig = (char *)big;
	slittle = (char *)little;
	i = 0;
	if (!little[i])
		return (&sbig[i]);
	while (sbig[i] && i < len)
	{
		j = 0;
		if (sbig[i] == slittle[j])
		{
			while (sbig[i++] == slittle[j++] && i < len)
				if (j == ft_strlen(slittle))
					return (&sbig[i - j]);
			i -= j;
			i++;
		}
		else
			i++;
	}
	return (NULL);
}

// int main()
// {
//     char *bigs = "lorem ipsum dolor sit amet";
//     char *lits = "lorem";

//     char *resultado = ft_strnstr(bigs, lits, 15);

//     if(resultado != NULL)
// 			printf("%s\n", resultado);
//     else
//         printf("Nulo\n");
// }