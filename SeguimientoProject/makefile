all: SP

SP: console.o date.o data.o reporte.o
	g++ -g -o $@ $^

console.o: console.h

date.o: date.cpp date.h

data.o: data.h

reporte.o: reporte.h

clean:
	rm -f *.o *~
