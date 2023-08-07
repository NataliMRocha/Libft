SRC = 	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

SRC_B = 	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror

OBJECTS = $(SRC:%.c=%.o)

OBJECTS_B = $(SRC_B:%.c=%.o)

INCLUDES = 	libft.h

RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDES)
	ar -rcs $(NAME) $(OBJECTS)

%.o:%.c
	${CC} ${FLAGS} -c $< -o $@

bonus: $(OBJECTS_B) $(INCLUDES)
	ar -rcs $(NAME) $(OBJECTS_B)

%.o:%.c
	${CC} ${FLAGS} -c $< -o $@

clean:
	$(RM) $(OBJECTS) $(OBJECTS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY:	all clean fclean re bonus rebonus