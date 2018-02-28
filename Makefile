NAME = libft.a

# PROGRESS BAR
T = $(words $(OBJ))
N = 0
C = $(words $N)$(eval N := x $N)
ECHO = "[`expr $C  '*' 100 / $T`%]"

#Colors
_GREY=\x1b[30m
_RED=\x1b[31m
_GREEN=\x1b[32m
_YELLOW=\x1b[33m
_BLUE=\x1b[34m
_PURPLE=\x1b[35m
_CYAN=\x1b[36m
_WHITE=\x1b[37m
_END=\x1b[0m

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
	ft_memchr.c \
	ft_memcmp.c \
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
	ft_isneg.c \
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
	ft_memmove.c \
	ft_putstr_fd.c \
	ft_striteri.c \
	ft_strnew.c \
	ft_swap.c \
	ft_uitoa.c \
	ft_lstnew.c \
	ft_lstdelone.c \
	ft_lstdel.c \
	ft_lstadd.c  \
	ft_lstad_end.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_putstr_nl.c

OBJ_FILES = $(SRC_FILES:.c=.o)

all : $(NAME)

$(NAME) :
	@gcc -Wall -Wextra -Werror -c $(SRC_FILES) -I.
	@ar rc $(NAME) $(OBJ_FILES)
	@echo "\n$(NAME) compil $(_GREEN)[OK]$(_END)"

clean :
	@rm -f $(OBJ_FILES)

fclean : clean
	@rm -f $(NAME)

re : fclean all


