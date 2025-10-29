# Makefile for Account class
# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Source files
SRCS = Account.cpp tests.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
NAME = account
# Build target
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^
# Clean target
clean:
	rm -f $(OBJS)
# Fclean target
fclean: clean
	rm -f $(NAME)
# Re target
re: fclean all
# Phony targets	
.PHONY: all clean fclean re