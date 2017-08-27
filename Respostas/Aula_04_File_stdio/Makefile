cat_falsificado: bib_arqs.o cat_falsificado.o
	gcc $(CFLAGS) -o cat_falsificado bib_arqs.o cat_falsificado.o
bib_arqs.o: bib_arqs.c bib_arqs.h
	gcc $(CFLAGSS) -c -Wextra -Wall -ansi bib_arqs.c
cat_falsificado.o: cat_falsificado.c bib_arqs.h
	gcc $(CFLAGSS) -c -Wextra -Wall -ansi cat_falsificado.c
clean:
	rm -f -r *.o cat_falsificado

