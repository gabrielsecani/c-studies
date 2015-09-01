$options="-xc -Wno-deprecated-declarations ";

all: clear	clean pilhaencadeada
	echo Done.

pilhaencadeada: pilhaencadeada.o
	gcc -o pilhaencadeada pilhaencadeada.o
	./pilhaencadeada

pilhaencadeada.o:
	gcc -o pilhaencadeada.o -c pilhaencadeada.c 

clear:
	clear screen

clean:
	rm -f *.o pilhaencadeada
	#Clear!
