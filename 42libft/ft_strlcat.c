/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:34:17 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/07 13:06:27 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*strlcat(char *dest, char *src, size_t l)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(src);
	while (i < l)
		dest[j++] = src[i];
	dest[j] = '\0';
	return (dest);
}
