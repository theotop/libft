NAME = libft.a

SRC_FILES = ft_atoi.c \
	ft_bzero.c \
	ft_memdel.c \
	ft_strcat.c \
	ft_strjoin.c \
	ft_strnstr.c \
	ft_cntwds.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strrchr.c \
	ft_isalnum.c \
	ft_putchar.c \
	ft_strclr.c \
	ft_strlen.c \
	ft_strsplit.c \
	ft_isalpha.c \
	ft_putchar_fd.c \
	ft_strcmp.c \
	ft_strmap.c \
	ft_strstr.c \
	ft_isascii.c \
	ft_putendl.c \
	ft_strcpy.c \
	ft_strmapi.c \
	ft_strsub.c \
	ft_isdigit.c \
	ft_putendl_fd.c \
	ft_strdel.c \
	ft_strncat.c \
	ft_strtrim.c \
	ft_isprint.c \
	ft_putnbr.c \
	ft_strdup.c \
	ft_strncmp.c \
	ft_tolower.c \
	ft_issep.c \
	ft_putnbr_fd.c \
	ft_strequ.c \
	ft_strncpy.c \
	ft_toupper.c \
	ft_itoa.c \
	ft_putstr.c \
	ft_striter.c \
	ft_strnequ.c \
	ft_memalloc.c \
	ft_putstr_fd.c \
	ft_striteri.c \
	ft_strnew.c \

OBJ_FILES = $(SRC_FILES:.c=.o)

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -c $(SRC_FILES) -I.
	ar rc $(NAME) $(OBJ_FILES)

clean :
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all


