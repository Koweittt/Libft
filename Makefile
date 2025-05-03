# ================================== #
#           LIBFT MAKEFILE           #
# ================================== #

# ---- Configurations ---- #
NAME        = libft.a
CC          = gcc
CFLAGS      = -Wall -Wextra -Werror
AR          = ar rcs
RM          = rm -f

# ---- Sources ---- #
SRCS        = \
              ft_atoi.c ft_bzero.c ft_calloc.c \
              ft_isalnum.c ft_isalpha.c ft_isascii.c \
              ft_isdigit.c ft_isprint.c ft_memchr.c \
              ft_memcmp.c ft_memcpy.c ft_memmove.c \
              ft_memset.c ft_split.c ft_strchr.c \
              ft_strdup.c ft_strjoin.c ft_strlcat.c \
              ft_strlcpy.c ft_strlen.c ft_strncmp.c \
              ft_strnstr.c ft_strrchr.c ft_strtrim.c \
              ft_substr.c ft_tolower.c ft_toupper.c \
	      ft_itoa.c

OBJS        = $(SRCS:.c=.o)

# ---- Colors ---- #
GREEN       = \033[0;32m
YELLOW      = \033[0;33m
RED         = \033[0;31m
RESET       = \033[0m

# ---- Rules ---- #
all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)✓ $(NAME) created successfully!$(RESET)"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(YELLOW)• Compiling: $(notdir $<)$(RESET)"

clean:
	@$(RM) $(OBJS)
	@echo "$(RED)• Object files removed$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)• $(NAME) removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re
