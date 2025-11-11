/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:31:37 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/11 17:11:55 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t l)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && i < l)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1 - s2);
	}
}

/*
int main(void) 
{
    printf("%s", ft_strtrim("         ", "a "));
    return 0;
}
*/