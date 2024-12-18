# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emansoor <emansoor@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 11:51:33 by emansoor          #+#    #+#              #
#    Updated: 2024/11/25 16:15:13 by emansoor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
		 ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c\
		 ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c\
		 ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c\
		 ft_toupper.c ft_strlcpy.c ft_strlcat.c ft_substr.c ft_strjoin.c\
		 ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c\
		 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		 ft_strtok.c get_next_line.c get_next_line_utils.c

BFILES = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c\
		 ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstdelone_bonus.c\
		 ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OFILES = $(CFILES:.c=.o)

BOFILES = $(BFILES:.c=.o)
	
CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(CFILES)
	ar -rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES) $(BOFILES)
	rm -f bonus
	rm -f .bonus

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

bonus: .bonus

.bonus: $(OFILES) $(BOFILES)
	ar -rcs $(NAME) $(BOFILES)
	touch .bonus

.PHONY: all clean fclean re bonus
