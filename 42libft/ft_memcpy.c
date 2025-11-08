/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:47:29 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/08 17:05:27 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    *ft_memcpy(void *dest, char *src, size_t size)
{
	int	i;
	char	*ptr;

	i = 0;
	ptr = malloc(sizeof(char) * size);
	while (i < size)
	{
		ptr[i] = src[i];
		i++;
	}
	dest = ptr;
	return (dest);
}