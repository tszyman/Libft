# Compiler
CC = cc

# Compiler flags
CFLAGS = -Wall -Werror -Wextra

# Executable name
NAME = libft

# Source files
SRC = main.c, ft_isalpha.c

# Object files
OBJ = $(SRC:.c=.o)

# Main rule for compiling the project
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Rule for cleaning object files
clean:
	rm -f $(OBJ)

# Rule for fully cleaning the project (removing executable and object files)
fclean: clean
	rm -f $(NAME)

# Default rule
all: $(NAME)

# Phony targets to avoid conflicts with file names
.PHONY: all clean fclean

