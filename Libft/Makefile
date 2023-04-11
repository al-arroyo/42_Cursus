NAME = libft.a 
FILES = \
		ft_atoi.c ft_bzero.c ft_calloc.c \
		ft_isalnum.c ft_isalpha.c\
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_strchr.c ft_strdup.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c\
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
		ft_itoa.c ft_strmapi.c ft_striteri.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

BONUS = \
		ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c \
		ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
		ft_lstsize.c
		
CC = gcc 
FLAGS = -Wall -Wextra -Werror
RM = @rm -f
OBJS = $(FILES:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

$(NAME) : $(OBJS)
	@ar rsc $(NAME) $(OBJS)

%.o : %.c
	@$(CC) $(FLAGS) -c -o $@ $<

all : $(NAME)

clean :
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	@ar rcs $(NAME) $(BONUS_OBJS)

.PHONY: all bonus clean fclean re