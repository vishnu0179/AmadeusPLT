lab6: Program.o SwapData.o CustomConsole.o
	g++ -o lab6 Program.o SwapData.o CustomConsole.o

CustomConsole.o: CustomConsole.cpp CustomConsole.h 
	g++ -c CustomConsole.cpp

SwapData.o: SwapData.cpp SwapData.h
	g++ -c SwapData.cpp

Program.o: Program.cpp SwapData.h CustomConsole.h
	g++ -c Program.cpp

clean:
	rm *.o lab6
	echo "Files removed"