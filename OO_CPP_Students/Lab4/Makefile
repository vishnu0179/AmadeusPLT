lab4: Program.o Cache.o CustomConsole.o
	g++ -o lab4 Program.o Cache.o CustomConsole.o

CustomConsole.o: CustomConsole.cpp CustomConsole.h 
	g++ -c CustomConsole.cpp

Cache.o: Cache.cpp Cache.h
	g++ -c Cache.cpp

Program.o: Program.cpp Cache.h CustomConsole.h
	g++ -c Program.cpp

clean:
	rm *.o lab4
	echo "Files removed"