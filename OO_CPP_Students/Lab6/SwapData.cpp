#include <string>
#include <iostream>
using namespace std;

#include "SwapData.h"

namespace Lab6
{

	int SwapData::GetNum1()
	{
		return _num1;
	}
	void SwapData::SetNum1(int num)
	{
		_num1 = num;
	}

	int SwapData::GetNum2()
	{
		return _num2;
	}
	void SwapData::SetNum2(int num)
	{
		_num2 = num;
	}
	/// <summary>
	/// Method to swap values
	/// </summary>
	void SwapData::SwapValues()
	{
		int temp = _num1;
		_num1 = _num2;
		_num2 = temp;
	}

	/// <summary>
	/// Method to display values before and after swapping
	/// </summary>
	/// <param name="str"></param>
	void SwapData::DisplayValues(string str)
	{
		cout<<str<<endl;
		cout<<"Number 1 = "<<_num1<<endl;
		cout<<"Number 2 = "<<_num2<<endl;
	}
}
