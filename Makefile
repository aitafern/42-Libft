# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/18 12:29:55 by aitafern          #+#    #+#              #
#    Updated: 2025/02/07 15:51:52 by aitafern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = /bin/rm -f

OBJS = ft_putnbr_fd.o \
	ft_putchar_fd.o \
	ft_putstr_fd.o \
	ft_strncmp.o \
	ft_strlen.o \
	ft_strlcpy.o \
	ft_isalnum.o \
	ft_isalpha.o \
	ft_isdigit.o \
	ft_isprint.o \
	ft_tolower.o \
	ft_toupper.o \
	ft_isascii.o \
	ft_memcpy.o \
	ft_memset.o \
	ft_bzero.o \
	ft_memmove.o \
	ft_strlcat.o \
	ft_strchr.o \
	ft_strrchr.o \
	ft_memchr.o \
	ft_memcmp.o \
	ft_strnstr.o \
	ft_calloc.o \
	ft_atoi.o \
	ft_strdup.o \
	ft_substr.o \
	ft_putendl_fd.o \
	ft_strjoin.o \
	ft_strtrim.o \
	ft_itoa.o \
	ft_striteri.o \
	ft_strmapi.o \
	ft_split.o

NAME = libft.a

.PHONY: all clean fclean re

all: $(NAME)


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): libft.h

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

