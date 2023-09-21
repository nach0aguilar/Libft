/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:58:52 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/21 13:25:01 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    **ft_split(char const *s, char c)
{
    unsigned int i;
    unsigned int x;
    unsigned int y;
    char    **array;

    i = 0;
    x = 0;
    y = 0;
    while (s[i])
    {
        if (!(i + 1 == c || i + 1 == '\0'))
        {
            array[x][y] = s[i];
            y++;
            i++;
        }
        else
        {
            i++;
            x++;
            y = 0;
        }
    }
}