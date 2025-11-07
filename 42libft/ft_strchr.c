/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:35:11 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/07 13:03:56 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(char *str, int c)
{
	char	ch;

	ch = (char) c;
	while (*str)
	{
		if (*str == ch)
			return ((char *) s);
		s++;
	}
	if (ch == '\0')
		return ((char *) s);
	return (NULL);
}
