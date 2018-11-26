# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnunez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/02 15:10:24 by pnunez            #+#    #+#              #
#    Updated: 2018/06/09 21:15:22 by pnunez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

# directories
SRC_DIR := ./src/
INC_DIR := ./include/

# flags
CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

# files
FT_CONV		:=	ft_atoi ft_itoa

FT_IS		:=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

FT_LST		:=	ft_lstadd ft_lstdel ft_lstdelone ft_lstiter ft_lstmap ft_lstnew

FT_MEM		:=	ft_bzero ft_memccpy ft_memcmp ft_memdel ft_memset ft_memalloc ft_memchr \
				ft_memcpy ft_memmove

FT_PUT		:=	ft_putchar ft_putendl ft_putnbr ft_putstr ft_putchar_fd ft_putendl_fd \
				ft_putnbr_fd ft_putstr_fd

FT_STR		:=	ft_charcount ft_strcmp ft_strequ ft_strlcat ft_strncat ft_strnew ft_strstr \
				ft_tolower ft_strcat ft_strcpy ft_striter ft_strlen ft_strncmp ft_strnstr \
				ft_strsub ft_toupper ft_strchr ft_strdel ft_striteri ft_strmap ft_strncpy \
				ft_strrchr ft_strtrim ft_strclr ft_strdup ft_strjoin ft_strmapi ft_strnequ \
				ft_strsplit ft_swap

FILES		:=	$(addprefix ft_conv/, $(FT_CONV)) \
				$(addprefix ft_is/, $(FT_IS)) \
				$(addprefix ft_lst/, $(FT_LST)) \
				$(addprefix ft_mem/, $(FT_MEM)) \
				$(addprefix ft_put/, $(FT_PUT)) \
				$(addprefix ft_str/, $(FT_STR))

CFILES := $(addprefix $(SRC_DIR), $(addsuffix .c, $(FILES)))
OFILES := $(CFILES:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(OFILES): %.o: %.c
	@$(CC) -c $(CFLAGS) -I $(INC_DIR) $< -o $@

$(NAME): $(OFILES)
	@ar rc $(NAME) $(OFILES)
	@ranlib $(NAME)
	@echo "\033[32mlibft.a created.\033[0m"

clean:
	@rm -f $(OFILES)
	@echo "\033[31mlibft object files removed.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31mlibft.a removed.\033[0m"

re: fclean all
re: fclean all
