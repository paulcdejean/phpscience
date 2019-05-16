libhello.so : hello.c
	gcc -shared -o hello.so -fPIC hello.c

test :
	php -dextension=./hello.so -m

test-example :
	php -dextension=./example.so -r "echo hello_world();" && echo ""

mirror.o : mirror.c
	gcc -g -O -c mirror.c

mirror : mirror.o
	gcc -g -Wall -o mirror mirror.o example.so
