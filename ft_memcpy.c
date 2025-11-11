/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:47:29 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/11 17:10:00 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, char *src, size_t size)
{
	int		i;
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

/*
int main(void) 
{
    printf("%s", ft_strtrim("         ", "a "));
    return 0;
}
*/