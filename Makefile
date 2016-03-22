A:A.o bmi.o
	g++ -o A A.o bmi.o

bmi.o:bmi.cpp bmi.h
	g++ -c bmi.cpp

A.o:A.cpp bmi.h
	g++ -c A.cpp

clean:
	rm A*.o
