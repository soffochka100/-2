all: catcafe
catcafe: main.o catcafe.o search.o
	gcc main.o catcafe.o search.o -o catcafe 
main.o: main.c
	gcc -c -o main.o main.c
book.o: catcafe.c
	gcc -c -o catcafe.o catcafe.c
search.o: search.c
	gcc -c -o search.o search.c
clean:
	rm -rf *.o catcafe
