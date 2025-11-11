/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:18:19 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/11 17:06:40 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_trimmed(char const *s, char const *set)
{
	int	i;
	int	j;
	int	k;
	int	trimmed;

	trimmed = 0;
	i = 0;
	j = 0;
	k = 0;
	while (s[k++])
	{
		while (s[i] != set[j])
		{
			if (s[i++] == set[j])
				trimmed++;
			if (!set)
			{
				j = 0;
				i++;
			}
			j++;
		}
		j = 0;
	}
	return (k - trimmed);
}

char	*ft_strtrim(char const *str, char const *set)
{
	t_variables	var;
	char		*copy;

	var.i = 0;
	var.j = 0;
	var.k = 0;
	copy = malloc(sizeof(char) * is_trimmed(str, set));
	while (str[var.i])
	{
		while (set[var.k])
		{
			while (str[var.i] == set[var.k])
			{
				var.k = 0;
				var.i++;
			}
			var.k++;
		}
		copy[var.j] = str[var.i];
		var.i++;
		var.j++;
		var.k = 0;
	}
	copy[var.j] = '\0';
	return (copy);
}

/*
int main(void) 
{
    printf("%s", ft_strtrim("         ", "a "));
    return 0;
}
*/