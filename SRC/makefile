CFLAGS= -Wall -pedantic -std=c99 
CC= gcc
LIBS = -lm

all:executable

debug: CC += -DDEBUG -g
debug: executable

quadTest:	Quad/quadTest.c Quad/quad.c
	${CC} -o quadTest quadTest.c quad.c ${LIBS}
	./quadTest

executable:	Main/main.c Quad/quad.c Input/input.c Output/output.c
	${CC} -o demo main.c quad.c input.c output.c ${LIBS}
	./demo
