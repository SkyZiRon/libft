/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:52:59 by bmelo             #+#    #+#             */
/*   Updated: 2025/11/11 17:18:47 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct var_list
{
	int	i;
	int	j;
	int	k;

}	t_variables;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(char *str);
int		*ft_memchr(void *s, int c, size_t n);
int		ft_strncmp(char *s1, char *s2, size_t lenght);
char	*ft_itoa(int n);
char	*ft_strdup(char *src);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
char	**ft_split(char const *s, char c);
char	*ft_strnstr(char *s1, char *s2, size_t l);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strlcat(char *dest, char *src, size_t n);
char	*ft_strtrim(char const *str, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *str, unsigned int start, size_t len);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	*ft_calloc(int count, size_t size);
void	*ft_bzero(void *ptr, int value, size_t count);
void	*ft_memset(void *ptr, int value, size_t count);
void	*ft_memcmp(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, char *src, size_t size);
void	*ft_memmove(void *dest, char *src, size_t size);
void	ft_striteri(char const *s, void (*f)(unsigned int, char *));
size_t	ft_strlen(char *str);
size_t	ft_strlcpy(char *dest, char *src, size_t size);

#endif
