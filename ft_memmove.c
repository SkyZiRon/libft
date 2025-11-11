/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:48:33 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/11 17:10:02 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, char *src, size_t size)
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