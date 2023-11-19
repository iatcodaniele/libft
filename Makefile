# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diatco <diatco@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 19:22:48 by diatco            #+#    #+#              #
#    Updated: 2023/11/19 15:13:47 by diatco           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --VARIBLES--

NAME	= libft.a
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
LIBCMP	= ar rcs
RM	= rm -f
MNDT	= ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_strlcpy.c ft_strlcat.c \
	ft_atoi.c ft_tolower.c ft_toupper.c \
	ft_strdup.c ft_strncmp.c \

MNDT_OBJ	:= $(MNDT:.c=.o)

# --RULES--

#predefined in make
%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME)

$(NAME): $(MNDT_OBJ)
	$(LIBCMP) $(NAME) $(MNDT_OBJ)

clean:
	$(RM) $(MNDT_OBJ)

fclean: clean
	$(RM) $(NAME)

re:
	fclean $(NAME)

.PHONY: all clean fclean re



