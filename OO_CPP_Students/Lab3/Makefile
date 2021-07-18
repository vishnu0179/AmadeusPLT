lab3: Program.o Address.o CustomConsole.o Employee.o
	g++ -o lab3 Program.o Address.o CustomConsole.o

CustomConsole.o: CustomConsole.cpp CustomConsole.h 
	g++ -c CustomConsole.cpp

Address.o: Address.cpp Address.h
	g++ -c Address.cpp

Employee.o: Employee.cpp Employee.h
	g++ -c Employee.cpp

Program.o: Program.cpp Address.h CustomConsole.h Employee.h
	g++ -c Program.cpp

clean:
	rm *.o lab3
	echo "Files removed"