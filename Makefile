# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 16:18:14 by gferreir          #+#    #+#              #
#    Updated: 2024/05/02 17:58:21 by gferreir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
RM = rm -f

SRCS = ft_abs.c ft_atoi.c ft_bzero.c ft_calloc.c\
       ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isnegative.c \
       ft_isprint.c ft_isspace.c ft_itoa.c ft_memchr.c ft_memcmp.c \
       ft_memcpy.c ft_memmove.c ft_memset.c ft_numlen.c ft_putchar_fd.c \
       ft_putendl_fd.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
       ft_split.c ft_strcat.c ft_strchr.c ft_strcmp.c \
       ft_strcpy.c ft_strdup.c ft_striteri.c ft_strjoin.c \
       ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
       ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_strtok.c \
       ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \


SRCSB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
       
OBJS = $(SRCS:.c=.o)
OBJSB = $(SRCSB:.c=.o)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

bonus: ${NAME} ${OBJSB}
	${LIBC} ${NAME} ${OBJSB}
clean:
	${RM} ${OBJS} ${OBJSB}

fclean: clean
	${RM} ${NAME} ${bonus} 

re: fclean all

.PHONY : all bonus clean fclean re