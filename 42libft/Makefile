# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/06 08:27:26 by bmelo             #+#    #+#              #
#    Updated: 2025/11/06 08:46:55 by bmelo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= 		srcs/ft_isalpha.c

NAME	= 		libft.h
FLAG	=		-Wall -Wextra -Werror
OBJ		=		$(SRC:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJ)
						ar rc $(NAME) $(OBJ)

%.o: %.c
						cc $(FLAG) -o $@ -c $<

clean:
						$(RM) $(OBJ)

fclean:			clean
						$(RM) $(NAME)

re:				fclean all

.PHONY:			clean fclean re