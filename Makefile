# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/14 10:59:27 by gguiulfo          #+#    #+#              #
#    Updated: 2017/05/14 18:58:57 by gguiulfo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= hotrace

CC		:= 	gcc
CFLAGS	+= 	-Wall -Wextra -Werror
CFLAGS	+= 	-I includes

HR_FILES = 	hr_main hr_trie
UT_FILES = 	ft_bzero ft_lstadd ft_lstdelnode ft_lstnew ft_memalloc \
			ft_memcpy ft_memmove ft_putstr ft_strchr ft_strcpy     \
			ft_strdup ft_strjoin ft_strlen ft_strncpy ft_strndup   \
			ft_strnew get_next_line ft_realloc ft_getchar

FILES	=	$(addprefix utils/, $(UT_FILES)) $(HR_FILES)

SRC = $(addprefix src/, $(addsuffix .c, $(FILES)))
OBJ = $(SRC:.c=.o)

.PHONY = all clean fclean re

all: $(NAME)

$(OBJ): %.o: %.c
	@$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJ)
	@$(CC) -o $@ $^
	@echo "\033[32mCompiled Executable\033[0m"

clean:
	@rm -rf $(OBJ)
	@echo "\033[32mRemoved Object Files\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[32mRemoved Executable\033[0m"

re: fclean all
