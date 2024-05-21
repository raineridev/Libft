# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 12:21:42 by mraineri          #+#    #+#              #
#    Updated: 2024/05/18 20:08:04 by mraineri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Variables

NAME := libft.a

CC := cc 
CFLAGS := -Wall -Wextra -Werror

FILES := ft_isalnum.c  ft_isprint.c  ft_memmove.c  ft_strlcat.c  ft_strrchr.c \
	ft_atoi.c    ft_isalpha.c  ft_memchr.c   ft_memset.c   ft_strlcpy.c  ft_strnstr.c \
	ft_bzero.c   ft_isascii.c  ft_memcmp.c   ft_strchr.c   ft_strlen.c   ft_tolower.c \
	ft_calloc.c  ft_isdigit.c  ft_memcpy.c   ft_strdup.c   ft_strncmp.c  ft_toupper.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putnbr_fd.c ft_putendl_fd.c \
	ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_lstnew.c  ft_lstdelone.c ft_lstclear.c

OFILES := $(FILES:%.c=%.o)

BFILES := ft_lstnew.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS	= $(BFILES:.c=.o)
## Target's

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

all: $(NAME)

clean: 
	rm -f $(OFILES)

fclean:
	rm -f $(NAME)

re: fclean all

bonus:			$(OFILES) $(BONUS_OBJS)
				ar rcs $(NAME) $(OFILES) $(BONUS_OBJS)
.DEFAULT_GOAL := all

.PHONY: all clean fclean re

