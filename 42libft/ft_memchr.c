/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:45:15 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/07 15:12:33 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*memchr(void *s, int c, size_t size)
{
	char chr;
	int	i;

	i = 0;
	chr = (char *) c;
	while (i < size)
	{
		if (*s == char)
			return ((char *) s + i);
		i++;
	}
	return (NULL);
}