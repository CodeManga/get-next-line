# get-next-line
This project will not only allow you to add a very convenient function to your collection, but it will also allow you to learn a highly interesting new concept in C programming: static variables. You will also gain a deeper understanding of allocations, whether they happen on the stack memory or in the heap memory, the manipulation and the life cycle of a buffer, the unexpected complexity implied in the use of one or many static variables.
 to run the program:
 make -C libft/ fclean && make -C libft/
 clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
 clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
 clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
 ./test_gnl <file name.extention>
 
Return value:
return 1 when it read a line
return 0 when it finished reading a file
return -1 when an error occurs
