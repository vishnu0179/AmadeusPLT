lab7: Program.o Result.o CustomConsole.o
	g++ -o lab7 Program.o Result.o CustomConsole.o

CustomConsole.o: CustomConsole.cpp CustomConsole.h 
	g++ -c CustomConsole.cpp

Result.o: Result.cpp Result.h
	g++ -c Result.cpp

Program.o: Program.cpp Result.h CustomConsole.h
	g++ -c Program.cpp

clean:
	rm *.o lab7
	echo "Files removed"
