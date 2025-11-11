/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:27:30 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/11 17:11:55 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(char *s1, char *s2, size_t len)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (*s2 == '\0')
		return (NULL);
	while (s1[i])
	{
		if (s1[i] == s2[i])
		{
			j++;
		}
		if (j == len)
			return (s1[i - j]);
		i++;
	}
}

/*
int main(void) 
{
    printf("%s", ft_strtrim("         ", "a "));
    return 0;
}
*/