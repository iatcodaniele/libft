# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diatco <diatco@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 19:22:48 by diatco            #+#    #+#              #
#    Updated: 2023/12/04 16:22:28 by diatco           ###   ########.fr        #
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
	ft_strdup.c ft_strncmp.c ft_memmove.c \
	ft_memcpy.c ft_bzero.c ft_memset.c \
	ft_strchr.c ft_strrchr.c ft_memchr.c \
	ft_memcmp.c ft_strnstr.c ft_calloc.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c \

BNS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c \

MNDT_OBJ	:= $(MNDT:.c=.o)
BNS_OBJ	:= $(BNS:.c=.o)

# --RULES--

#predefined in make
%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME)

$(NAME): $(MNDT_OBJ)
	$(LIBCMP) $(NAME) $(MNDT_OBJ)

bonus: $(BNS_OBJ)
	$(LIBCMP) $(NAME) $(BNS_OBJ)

clean:
	$(RM) $(MNDT_OBJ) $(BNS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus



