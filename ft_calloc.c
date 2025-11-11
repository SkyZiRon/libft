/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:37:19 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/11 17:09:27 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = ptr;
	while (i < count)
		dest[i++] = value;
	return (dest);
}

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*ptr;
	size_t	total;

	total = nmeb * size;
	ptr = malloc(total);
	if (nmeb == 0 || size == 0)
		return (NULL);
	if (!ptr)
		return (NULL);
	memset(ptr, 0, total);
	return (ptr);
}

/*
int main(void) 
{
    printf("%s", ft_strtrim("         ", "a "));
    return 0;
}
*/