#include <iostream>
#include <string>

using namespace std;

#include "Result.h"

using namespace Lab7;

int main(int argc, char *argv[])
{
    int marks1, marks2, marks3;

    //Accept the values from command line arguments
    marks1 = stoi(argv[1]);
    marks2 = stoi(argv[2]);
    marks3 = stoi(argv[3]);

    //Store the values entered in the object
	Result finder;
    finder.SetMarks1(marks1);
    finder.SetMarks2(marks2);
    finder.SetMarks3(marks3);

    //Display all the information with the help of get and other methods
    cout << "Marks entered------------- " << endl;
    cout << "Marks 1 : "  << finder.GetMarks1()<<endl;
    cout << "Marks 2 : " << finder.GetMarks2() << endl;
    cout << "Marks 3 : "  << finder.GetMarks3() << endl;
    cout << "Total : "  << finder.GetTotal()<< endl;
    cout << "Average : " << finder.GetAverage() << endl;
    cout << "Result : " << finder.GetResult() << endl;

}
    