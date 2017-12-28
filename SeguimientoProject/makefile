all: SP

SP: console.o date.o data.o report.o
	g++ -g -o $@ $^

console.o: console.cpp console.h

date.o: date.cpp date.h

data.o: data.cpp data.h

report.o: report.cpp report.h

clean:
	rm -f *.o *~
