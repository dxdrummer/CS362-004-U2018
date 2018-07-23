CFLAGS = -Wall -fpic -coverage -lm -std=c99



all: testme.o

testme.o: testme.c
		gcc  -o testme -g  testme.c $(CFLAGS)

clean:
	rm -f *.o *.c *.gcno