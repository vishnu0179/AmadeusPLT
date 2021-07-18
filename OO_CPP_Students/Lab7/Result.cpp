#include <string>
#include <iostream>
using namespace std;

#include "Result.h"

namespace Lab7
{

	int Result::GetMarks1()
	{
		return _marks1;
	}
	void Result::SetMarks1(int marks1)
	{
		_marks1 = marks1;
	}
	
	int Result::GetMarks2()
	{
		return _marks2;
	}
	void Result::SetMarks2(int marks2)
	{
		_marks2 = marks2;
	}

	int Result::GetMarks3()
	{
		return _marks3;
	}
	void Result::SetMarks3(int marks3)
	{
		_marks3 = marks3;
	}


	void Result::DisplayMarks()
	{
		cout<<"---Marks---"<<endl;
		cout << "Marks 1 : "<<_marks1  << endl;
		cout << "Marks 2 : "<<_marks2 << endl;
		cout << "Marks 3 : "<<_marks3 << endl;
	}

	int Result::GetTotal()
	{
		int total = 0;
		total = _marks1 +  _marks2 + _marks3;
		return total;
	}

	double Result::GetAverage()
	{
		double avg = 0;
		avg = double(GetTotal()) / 3.0;
		return avg;
	}

	string Result::GetResult()
	{
		string result = "Fail";

		double avg = GetAverage();

		if(avg >= 40.0) {
			result = "Pass";
		}
		return result;
	}
}
