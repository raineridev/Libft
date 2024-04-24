# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mraineri <mraineri@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 12:21:42 by mraineri          #+#    #+#              #
#    Updated: 2024/04/24 12:24:24 by mraineri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Variables
NAME := libft.a
CC := cc 
CFLAGS := -Wall -Wextra -Werror
FILES := ft_isdigit.c ft_memset.c ft_strrchr.c ft_atoi.c ft_isprint.c ft_strchr.c ft_strstr.c \
			ft_bzero.c ft_memchr.c ft_strlcat.c  ft_tolower.c ft_isalnum.c  ft_memcmp.c   ft_strlcpy.c \
			ft_toupper.c ft_isalpha.c  ft_memcpy.c   ft_strlen.c ft_isascii.c  ft_memmove.c  ft_strncmp.c

MESSAGECOMPILESUCESS := @echo "\e[102;30m COMPILATION DONE SUCCESSFULLY "
MESSAGECLEAN := @echo "\e[104m COMPILED FILE HAS BEEN DELETED "
all: $(FILES)
	$(CC) $(CFLAGS) $(FILES) -o comp
	$(MESSAGECOMPILESUCESS);

info: 
	@echo "\e[41m FLAGS USED: \n\e[49;95m$(CFLAGS);\n\e[30;107m FILES: \n\e[49;95m$(FILES);" 
fclean: 
	@rm -f comp
	$(MESSAGECLEAN)