NAME = libftprintf.a
INCLUDES = include/
SRC_DIR = src/
OBJS_DIR = obj/
SRC = \
	ft_print_base \
	ft_print_hex \
	ft_print_percent \
	ft_print_str \
	ft_print_void \
	ft_printchar \
	ft_printf

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC)))
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC)))

OBJSF = .cache_exists

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS_DIR)%.o: $(SRC_DIR)%.c | $(OBJSF)
	$(CC) $(FLAGS) -I$(INCLUDES) -c $< -o $@

$(OBJSF):
	mkdir -p $(OBJS_DIR)

all: $(NAME)

clean:
	$(RM) -rf $(OBJS_DIR) $(OBJSF)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

norm:
	norminette $(SRCS) $(INCLUDES) | grep -v Norme -B1 || true

.PHONY: all clean fclean re norm
