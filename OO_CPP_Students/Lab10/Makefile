lab10: Employee.o Roles.o RoleBuilder.o CustomConsole.o SalaryCalculator.o EmployeeReport.o Program.o
	g++ -o lab10 Employee.o Roles.o RoleBuilder.o CustomConsole.o SalaryCalculator.o EmployeeReport.o Program.o

Employee.o: Employee.cpp Employee.h
	g++ -c Employee.cpp

Roles.o: Roles.cpp Roles.h 
	g++ -c Roles.cpp

RoleBuilder.o: RoleBuilder.cpp RoleBuilder.h
	g++ -c RoleBuilder.cpp

CustomConsole.o: CustomConsole.cpp CustomConsole.h 
	g++ -c CustomConsole.cpp

SalaryCalculator.o: SalaryCalculator.cpp SalaryCalculator.h 
	g++ -c SalaryCalculator.cpp

EmployeeReport.o: EmployeeReport.cpp EmployeeReport.h
	g++ -c EmployeeReport.cpp

Program.o: Program.cpp Employee.h Roles.h RoleBuilder.h CustomConsole.h SalaryCalculator.h EmployeeReport.h
	g++ -c Program.cpp

clean:
	rm *.o lab10
	echo "Files removed"
