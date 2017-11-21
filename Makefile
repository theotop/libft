NAME = libft.a

all: $(NAME)

$(NAME) :
	srcs/ft_atoi.c srcs/ft_memdel.c srcs/ft_strcat.c srcs/ft_strjoin.c \
		srcs/ft_strnstr.c srcs/ft_cntwds.c srcs/ft_memset.c srcs/ft_strchr.c \
		srcs/ft_strlcat.c srcs/ft_strrchr.c srcs/ft_isalnum.c \
		srcs/ft_putchar.c srcs/ft_strclr.c srcs/ft_strlen.c srcs/ft_strsplit.c \
		ft_isalpha.c srcs/ft_putchar_fd.c srcs/ft_strcmp.c srcs/ft_strmap.c \
		srcs/ft_strstr.c srcs/ft_isascii.c srcs/ft_putendl.c srcs/ft_strcpy.c \
		srcs/ft_strmapi.c srcs/ft_strsub.c srcs/ft_isdigit.c \ 
		srcs/ft_putendl_fd.c srcs/ft_strdel.c srcs/ft_strncat.c \
		srcs/ft_strtrim.c srcs/ft_isprint.c srcs/ft_putnbr.c srcs/ft_strdup.c \
		srcs/ft_strncmp.c srcs/ft_tolower.c srcs/ft_issep.c \
		srcs/ft_putnbr_fd.c srcs/ft_strequ.c srcs/ft_strncpy.c \
		srcs/ft_toupper.c srcs/ft_itoa.c srcs/ft_putstr.c srcs/ft_striter.c
		srcs/ft_strnequ.c srcs/ft_memalloc.c srcs/ft_putstr_fd.c \
		srcs/ft_striteri.c srcs/ft_strnew.c includes/libft.h

		ar rc libft.a ./ft_atoi.o ./ft_memdel.c ./ft_strcat.c ./ft_strjoin.c \
		./ft_strnstr.o ./ft_cntwds.c ./ft_memset.c ./ft_strchr.c \
		./ft_strlcat.o ./ft_strrchr.c ./ft_isalnum.c \
		./ft_putchar.o ./ft_strclr.c ./ft_strlen.c ./ft_strsplit.c \
		ft_isalpha.o ./ft_putchar_fd.c ./ft_strcmp.c ./ft_strmap.c \
		./ft_strstr.o ./ft_isascii.c ./ft_putendl.c ./ft_strcpy.c \
		./ft_strmapi.o ./ft_strsub.c ./ft_isdigit.c \ 
		./ft_putendl_fd.o ./ft_strdel.c ./ft_strncat.c \
		./ft_strtrim.o ./ft_isprint.c ./ft_putnbr.c ./ft_strdup.c \
		./ft_strncmp.o ./ft_tolower.c ./ft_issep.c \
		./ft_putnbr_fd.o ./ft_strequ.c ./ft_strncpy.c \
		./ft_toupper.o ./ft_itoa.c ./ft_putstr.c ./ft_striter.c
		./ft_strnequ.o ./ft_memalloc.c ./ft_putstr_fd.c \
		./ft_striteri.o ./ft_strnew.c
clean :
		/bin/rm -f ./ft_atoi.o ./ft_memdel.c ./ft_strcat.c ./ft_strjoin.c \
		./ft_strnstr.o ./ft_cntwds.c ./ft_memset.c ./ft_strchr.c \
		./ft_strlcat.o ./ft_strrchr.c ./ft_isalnum.c \
		./ft_putchar.o ./ft_strclr.c ./ft_strlen.c ./ft_strsplit.c \
		ft_isalpha.o ./ft_putchar_fd.c ./ft_strcmp.c ./ft_strmap.c \
		./ft_strstr.o ./ft_isascii.c ./ft_putendl.c ./ft_strcpy.c \
		./ft_strmapi.o ./ft_strsub.c ./ft_isdigit.c \ 
		./ft_putendl_fd.o ./ft_strdel.c ./ft_strncat.c \
		./ft_strtrim.o ./ft_isprint.c ./ft_putnbr.c ./ft_strdup.c \
		./ft_strncmp.o ./ft_tolower.c ./ft_issep.c \
		./ft_putnbr_fd.o ./ft_strequ.c ./ft_strncpy.c \
		./ft_toupper.o ./ft_itoa.c ./ft_putstr.c ./ft_striter.c
		./ft_strnequ.o ./ft_memalloc.c ./ft_putstr_fd.c \
		./ft_striteri.o ./ft_strnew.c
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all


