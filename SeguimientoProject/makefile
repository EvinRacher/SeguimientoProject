CXXFLAGS=-Ddebug
all: SP

SP: lan.o parameter.o console.o date.o data.o report.o
	g++ -g -o $@ $^

lan.o: lan.cpp

console.o: console.cpp console.h

parameter.o: parameter.cpp parameter.h

date.o: date.cpp date.h

data.o: data.cpp data.h

report.o: report.cpp report.h

clean:
	rm -f *.o *~ SP *#
