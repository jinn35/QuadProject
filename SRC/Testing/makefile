CFLAGS= -std=c99 -w
#CFLAGS= -pedantic
#CFLAGS= -Wall
 
CC= gcc
LIBS = -lm

all:quadTest

quadTest:	./Testing/main.c ./Testing/quad.c ./Testing/test_driver.c ./Testing/mock_output.c
	${CC} ${CFLAGS} -o demo ./Testing/main.c ./Testing/quad.c ./Testing/test_driver.c ./Testing/mock_output.c
