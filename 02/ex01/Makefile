#Compiler
CXX = g++

#Compiler Flags
CXX_FLAGS = -Wall -Werror -Wextra -std=c++98

#Sources
SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = fixed2

#Targets
all: $(NAME)

#Linking
$(NAME): $(OBJS) 
	$(CXX) $(CXX_FLAGS) $(OBJS) -o $(NAME)

#Compiling
%.o: %.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: 
	rm -f $(NAME) $(OBJS)

re: clean all