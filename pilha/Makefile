all: clear	clean pilhaencadeada
	echo Done.

pilhaencadeada: pilhaencadeada.o
	gcc -xc -o pilhaencadeada pilhaencadeada.o
	./pilhaencadeada

pilhaencadeada.o:
	gcc -xc -o pilhaencadeada.o -c pilhaencadeada.c -Wno-deprecated-declarations 

clear:
	clear screen

clean:
	rm -f *.o pilhaencadeada
	#Clear!
