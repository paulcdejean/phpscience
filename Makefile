paultest.so : main.go pauladd.go
	sudo docker run -it --rm --user `id -u`:`id -g` -e GOCACHE=/go/.cache/ -v ${PWD}:/go golang \
	go build -o paultest.so -buildmode=c-shared

test :
	php -dextension=./hello.so -m

test-example :
	php -dextension=./example.so -r "echo hello_world();" && echo ""

mirror.o : mirror.c
	gcc -g -O -c mirror.c

mirror : mirror.o
	gcc -g -Wall -o mirror mirror.o example.so
