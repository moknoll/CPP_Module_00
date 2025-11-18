#Compiler
CXX = c++

#Compiler Flags
CXX_FLAGS = -Wall -Werror -Wextra -std=c++98

#Sources
SRCS = main.cpp Dog.cpp AAnimal.cpp Cat.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Brain

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