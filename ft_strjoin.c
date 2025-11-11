/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:05:20 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/11 17:11:55 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	int		size_max;
	char	*join;

	i = 0;
	j = 0;
	k = 0;
	size_max = ft_strlen(s1) + ft_strlen(s2);
	join = malloc(sizeof(char) * size_max + 1);
	if (join == '\0')
		return (NULL);
	while (i < size_max)
	{
		while (i < size_max - ft_strlen(s1))
			join[i++] = s1[j++];
		join[i] = s2[k];
		i++;
		k++;
	}
	join[i] = '\0';
	return (join);
}

/*
int main(void) 
{
    printf("%s", ft_strtrim("         ", "a "));
    return 0;
}
*/