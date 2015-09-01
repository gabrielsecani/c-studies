all: clean resolucao_parte2_NACSIS
	echo Done.

#resolucao_parte2_NACSIS.o:
#	gcc -c -o resolucao_parte2_NACSIS.o resolucao_parte2_NACSIS.c 

resolucao_parte2_NACSIS: resolucao_parte2_NACSIS.o
	gcc -o resolucao_parte2_NACSIS resolucao_parte2_NACSIS.o -xc
	./resolucao_parte2_NACSIS

resolucao_parte2_NACSIS.o:
	gcc -o resolucao_parte2_NACSIS.o -c resolucao_parte2_NACSIS.c -Wno-deprecated-declarations -xc

clean:
	rm -f *.o resolucao_parte2_NACSIS
	#Clear!
