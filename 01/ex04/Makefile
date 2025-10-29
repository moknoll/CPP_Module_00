#Compiler
CXX = g++

#Compiler Flags
CXX_FLAGS = -Wall -Werror -Wextra -std=c++98

#Sources
SRCS = main.cpp sedIsForLosers.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = sedIsForLosers

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
	rm -f *.txt
	rm -f *.replace

re: clean all