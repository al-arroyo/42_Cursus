NAME = libft.a 
INCLUDES = ../include
SRC_DIR = src/
OBJS_DIR = obj/
SRC = \
		ft_atoi ft_bzero ft_calloc \
		ft_isalnum ft_isalpha\
		ft_isascii ft_isdigit ft_isprint ft_memchr \
		ft_memcmp ft_memcpy ft_memmove ft_memset \
		ft_strchr ft_strdup \
		ft_strlcat ft_strlcpy ft_strlen ft_strncmp \
		ft_strnstr ft_strrchr ft_tolower ft_toupper\
		ft_substr ft_strjoin ft_strtrim ft_split\
		ft_itoa ft_strmapi ft_striteri\
		ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

BONUS = \
		ft_lstnew_bonus ft_lstadd_front_bonus ft_lstadd_back_bonus ft_lstclear_bonus \
		ft_lstdelone_bonus ft_lstiter_bonus ft_lstlast_bonus ft_lstmap_bonus \
		ft_lstsize_bonus
		
CC = gcc 
FLAGS = -Wall -Wextra -Werror
RM = @rm -f
AR = @ar rsc

SRCS 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC)))
BONUSS		=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(BONUS)))
OBJS 		=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC)))
BONUS_OBJS	= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(BONUS)))

OBJSF		=	.cache_exists

$(NAME) : $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
	@ranlib $(NAME)

$(OBJS_DIR).o : $(SRC_DIR).c | $(OBJSF)
	@$(CC) $(FLAGS) $(INCLUDES)-c $< -o $@ 

$(OBJSF):
	@mkdir -p $(OBJS_DIR)

all : $(NAME)

clean :
	$(RM) -rf $(OBJS_DIR) 
	$(RM) -f $(OBJSF)

fclean : clean
	$(RM) -f $(NAME)

re : fclean all

bonus: $(BONUSS) $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

norm:
	@norminette $(SRCS) $(BONUSS) $(INCLUDES) | grep -v Norme -B1 || true

.PHONY: all bonus clean fclean re norm