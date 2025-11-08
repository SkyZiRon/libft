/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:03:01 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/08 16:31:02 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
    while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	int	i;
	char	*sub;
	
	i = 0;
	sub = malloc(sizeof(char) * ft_strlen(str));
	if (sub == '\0')
		return (0);
	while (i < len)
	{
		sub[i] = str[i + start];
		i++;
	}
	return (sub);
}