# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 19:18:15 by igaguila          #+#    #+#              #
#    Updated: 2023/09/29 21:07:58 by igaguila         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= 	ft_isprint.c ft_strlcat.c ft_substr.c ft_atoi.c \
				  	ft_strlcpy.c ft_tolower.c ft_bzero.c \
				  	ft_memchr.c ft_strlen.c ft_toupper.c ft_calloc.c \
				  	ft_memcmp.c ft_split.c ft_isalnum.c \
				  	ft_memcpy.c ft_strchr.c ft_strncmp.c ft_isalpha.c \
				  	ft_strdup.c ft_strnstr.c ft_isascii.c ft_memset.c \
				  	ft_strrchr.c ft_isdigit.c ft_strjoin.c \
				  	ft_strtrim.c ft_memmove.c ft_itoa.c ft_strmapi.c\
				  	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
				  	ft_putendl_fd.c ft_putnbr_fd.c 
				  
OBJS			= 	${SRCS:.c=.o}

BONUS_SRCS		=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
					ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
					ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS		= 	${BONUS_SRCS:.c=.o}

NAME			= 	libft.a

CC				= 	gcc

CFLAGS			= 	-Wall -Wextra -Werror

RM				= 	rm -f

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS} ${BONUS_OBJS}
	ar -rcs ${NAME} ${OBJS} ${BONUS_OBJS}

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	${RM} ${OBJS}
	${RM} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus