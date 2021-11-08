
#CC := gcc
#object = $(shell find . -type f -name "*.c" -exec basename {} .c \;)




#libft.a: $(object).o libft.h
#	ar rcs libft.a $<


#%.o: %.c 
#$(CC) -c $<




#clean: 
#rm *.o output


# compiler Flags and target program
CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a

# all source, object, and dependency files
SOURCES := $(shell find . -type f -name "ft_*.c" -exec basename {} \;)
OBJECTS := $(SOURCES:%.c=%.o)

# target for linking compiled .o files into one program
$(NAME) : $(OBJECTS) libft.h
	ar rcs $(NAME) $(OBJECTS)

#root target calling other targets
all: $(NAME)

# target to compile all .c files,
%.o : %.c $(SOURCES)
	$(CC) $(FLAGS) -c $<

# delete OBJ files
clean:
	rm -r $(OBJECTS)

#the fclean will delete the program but after clean removes OBJ files
fclean: clean
	rm -f $(NAME)
#re: will do fclean and re-make your program
re: fclean all
#to tell make all: is not a file
.PHONY: all clean fclean re