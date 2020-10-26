arpsting: arpsting.o
	gcc -o arpsting arpsting.o

arpsting.o: arpsting.c
	gcc -c arpsting.c

run:
	./arpsting
