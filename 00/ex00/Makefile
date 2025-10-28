#Compiler
CXX = g++ 
#Compiler Flags
CXX_FLAGS =  -Wall -Wextra -Werror -std=c++98

#Data 
SRCS = megaphone.cpp 
OBJS = $(SRCS:.cpp=.o)
NAME = megaphone

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