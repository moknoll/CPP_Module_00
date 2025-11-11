#Compiler 
CXX = c++

#Compiler Flags 
CXX_FLAGS = -Wall -Werror -Wextra -std=c++98

#Sources
SRCS = main.cpp polymorphism.cpp
ObJS = $(SRCS:.cpp=.o)
NAME = polymorphism

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
	rm -rf $(NAME) $(OBJS)

re: clean all