/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:05:19 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/11 17:20:10 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *ptr, int value, size_t count)
{
	size_t	i;
	char	*dest;

	value = 0;
	i = 0;
	dest = ptr;
	while (i < count)
		dest[i++] = value;
	return (dest);
}

/*
int main(void) 
{
    printf("%s", ft_strtrim("         ", "a "));
    return 0;
}
*/