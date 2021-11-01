
output: main.o ft_isalpha.o
	gcc main.o ft_isalpha.o -o output

main.o: main.c
	gcc -c main.c

ft_alpha.o: ft_isalpha.c libft.h
	gcc -c ft_isalpha.c
clean: 
	rm *.o output