/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:37:25 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/06 10:04:33 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *ptr, int value, size_t count)
{
    size_t i;
    char    *dest;
    
    i = 0;
    dest = ptr;
    while(i < count)
        dest[i++] = value;
    return (dest);
}