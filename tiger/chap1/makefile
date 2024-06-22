a.out: main.o prog1.o slp.o util.o
	cc -g -O0 main.o prog1.o slp.o util.o

main.o: main.c slp.h util.h
	cc -g -O0 -c main.c

prog1.o: prog1.c slp.h util.h
	cc -g -O0 -c prog1.c

slp.o: slp.c slp.h util.h
	cc -g -O0 -c slp.c

util.o: util.c util.h
	cc -g -O0 -c util.c

clean: 
	rm -f a.out util.o prog1.o slp.o main.o
