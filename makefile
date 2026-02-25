exe: puissance4.o main.o
	gcc puissance4.o main.o -o puissance4

puissance4.o: puissance4.c puissance4.h
	gcc -c -Wall puissance4.c -o puissance4.o

main.o: main.c puissance4.h
	gcc -c -Wall main.c -o main.o

clean:
	rm -f *.o
	clear
