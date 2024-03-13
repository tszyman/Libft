# Compiler
CC = clang

# Compiler flags
CFLAGS = -Wall -Werror -Wextra

#lokalizacja libFT
LIBFT_DIR = ../
LIBFT = $(LIBFT_DIR)libft.a

# Source files (here should land all other c libraries seperated with space)
#SRCS = test_ft_isalpha.c test_ft_isdigit.c test_ft_isalnum.c
SRCS = $(wildcard *.c)

# Object files
OBJS = $(SRCS:.c=.o)

# Programs
PROGS = $(SRCS: .c=)

# Default rule
all: $(SRCS:.c=)

# Main compiling rule clang -Wall -Werror -Wextra test_ft_isalnum.c -I.. -L../ -lft -o test_ft_isalnum
%: %.c
	$(CC) $(CFLAGS) -I.. $< -L../ -lft -o $@

# Rule for cleaning object files
clean:
	rm -f $(OBJS)

# Rule for fully cleaning the project (removing executable and object files)
fclean: clean
	rm -f $(OBJS:.o=)

# Recompile all
re: fclean all

# Phony targets to avoid conflicts with file names
.PHONY: all clean fclean

