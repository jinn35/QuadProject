CFLAGS= -Wall -pedantic -std=c99 
CC= gcc
LIBS = -lm

all: executable

debug: CC += -DDEBUG -g
debug: executable

executable:	main.c quad.c input.c output.c
	${CC} -o test1 main.c quad.c input.c output.c ${LIBS}
	./test1
