all: parseargs.o
	gcc -o output parseargs.o

parseargs.o: parseargs.c
	gcc -c parseargs.c

run:
	./output

clean:
	rm *.o
	rm *~
