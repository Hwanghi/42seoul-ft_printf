NAME = libftprintf.a

INCLUDE_DIR = ./includes/

SRCS_DIR = ./srcs/
SRCS_NAME = \
	ft_printf.c \
	libft.c \
	print.c

BASIC = \
	$(addprefix $(SRCS_DIR), $(SRCS_NAME))

OBJ_DIR = objs

vpath %.c $(SRCS_DIR)

OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(BASIC:.c=.o)))

# Options =============================================

CC = gcc
RM = rm -rf
FLAG = -Wall -Werror -Wextra -I $(INCLUDE_DIR)
AR = ar
ARFLAGS = rcs

#======================================================

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

$(OBJ_DIR) :
	mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o : %.c $(OBJ_DIR)
	$(CC) $(FLAG) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
