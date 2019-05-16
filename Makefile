libhello.so : hello.c
	gcc -shared -o hello.so -fPIC hello.c

test :
	php -dextension=./hello.so -r "echo hello_world();"
