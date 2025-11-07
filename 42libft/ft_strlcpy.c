/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:14:38 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/07 13:07:29 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
*/

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	int	i;

	i = 0;
	dest = malloc(sizeof(char) * size);
	if (src == 0)
		return (0);
	if (dest == 0)
		return (0);
	while (i < size - 1)
		dest[i] = src[i];
	dest[i] = '\0';
	return (i);
}
