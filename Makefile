# Compiler
CC = cc

# Compiler flags
CFLAGS = -Wall -Werror -Wextra

# Library name
NAME = libft.a

# Source files (here should land all other c libraries seperated with space)
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c

# Object files
OBJS = $(SRCS:.c=.o)

# Lib builder
LIBC = ar rcs

# Main compiling rule
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# Main rule for compiling the library
$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

# Rule for cleaning object files
clean:
	rm -f $(OBJS)

# Rule for fully cleaning the project (removing executable and object files)
fclean: clean
	rm -f $(NAME)

# For testing
tests:
	$(CC) $(CFLAGS) -c tests.c -o tests.o

# Default rule
all: $(NAME)

# Recompile all
re: fclean all

# Phony targets to avoid conflicts with file names
.PHONY: all clean fclean

