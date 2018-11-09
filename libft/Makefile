# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: fleonard <fleonard@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/02 12:10:20 by fleonard     #+#   ##    ##    #+#        #
#    Updated: 2018/11/09 20:00:59 by fleonard    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c\
	  ft_strlen.c\
	  ft_putstr.c\
	  ft_strdup.c\
	  ft_strcpy.c\
	  ft_strlen.c\
	  ft_strcat.c\
	  ft_tolower.c\
	  ft_toupper.c\
	  ft_atoi.c\
	  ft_isalpha.c\
	  ft_isprint.c\
	  ft_putnbr.c\
	  ft_isalnum.c\
	  ft_isdigit.c\
	  ft_strcmp.c\
	  ft_strncmp.c\
	  ft_strequ.c\
	  ft_strnequ.c\
	  ft_strsplit.c\
	  ft_strnew.c\
	  ft_putnbr.c\
	  ft_putnbr_fd.c\
	  ft_putstr_fd.c\
	  ft_putchar_fd.c\
	  ft_putendl.c\
	  ft_putendl_fd.c\
	  ft_memalloc.c\
	  ft_isascii.c\
	  ft_strclr.c\
	  ft_itoa.c\
	  ft_strdel.c\
	  ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memmove.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strsub.c\
	  ft_strncpy.c\
	  ft_strncat.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_memdel.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strjoin.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strstr.c\
	  ft_strnstr.c\
	  ft_strtrim.c\
	  ft_strlcat.c\
	  ft_islower.c\
	  ft_isupper.c\
	  ft_strrev.c\
	  ft_word_len.c\
	  ft_count_words.c\
	  ft_lstadd.c\
	  ft_lstdelone.c\
	  ft_lstdel.c\
	  ft_lstiter.c\
	  ft_lstmap.c\
	  ft_lstnew.c\
	  ft_strcapitalize.c\
	  ft_swap.c\
	  ft_strndup.c\
	  ft_getfirstword.c\
	  ft_putsstr.c

OBJ = $(subst .c,.o,$(SRC))

LIGHT_RED = \033[0;38;5;9m

RED = \033[0;38;5;196m

BLUE = \033[0;38;5;123m

LIGHT_GREEN = \033[0;38;5;121m

GREEN = \033[33;32m

PURPLE = \033[33;35m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BLUE)\n Fichiers compiles aves le plus beau succes du monde"
	@ar rc $(NAME) $(OBJ)
	@echo "$(GREEN)Creation de la libft"
	@ranlib $(NAME)
	@echo "$(PURPLE)Indexation de la libft"

%.o: %.c libft.h
	@gcc $(FLAGS) -o $@ -c $<
	@echo "$(BLUE).\c"

clean:
	@rm -rf $(OBJ)
	@echo "$(LIGHT_RED)Suppression des .o"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)Suppression de" $(NAME)

re: fclean all
