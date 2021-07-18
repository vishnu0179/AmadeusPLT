lab8: Decimal.o Program.o
	g++ -o lab8 Decimal.o Program.o

Decimal.o: Decimal.cpp Decimal.h
	g++ -c Decimal.cpp

Program.o: Program.cpp Decimal.h
	g++ -c Program.cpp

clean:
	rm *.o lab8
	echo "Files removed"