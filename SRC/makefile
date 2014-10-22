CFLAGS= -Wall -pedantic -std=c99 
CC= gcc
LIBS = -lm

all:executable

debug: CC += -DDEBUG -g
debug: executable

quadTest:	./Quad/quadTest.c ./Quad/quad.c
	${CC} -o /Quad/quadTest.c ./Quad/quad.c ${LIBS}

executable:	./Main/main.c ./Quad/quad.c ./Input/input.c ./Output/output.c
	${CC} ./Main/main.c ./Quad/quad.c ./Input/input.c ./Output/output.c ${LIBS}
	./demo
