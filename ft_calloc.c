/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:46:07 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/19 18:08:38 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void *pointer;

	pointer = malloc(count * size);
	if (pointer == NULL)
		return (pointer);
	ft_bzero(pointer, count * size);
	return (pointer);
}