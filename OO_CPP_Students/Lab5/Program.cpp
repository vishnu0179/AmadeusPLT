#include <iostream>
#include <string>
using namespace std;

/// <summary>
/// Method to swap two numbers
/// </summary>
/// <param name="Number1"></param>
/// <param name="Number2"></param>
void SwapValues(int &number1, int &number2)
{
	//Write your logic here
	int temp = number1;
	number1 = number2;
	number2 = temp;
}

/// <summary>
/// Method to display the numbers before and after swapping
/// </summary>
/// <param name="Str"></param>
/// <param name="Number1"></param>
/// <param name="Number2"></param>
void DisplayValues(string str, int number1, int number2)
{
	cout << str << endl;
	cout << "Number 1 = " << number1 << endl;
	cout << "Number 2 = " << number2 << endl;
}

int main(int argc, char *argv[])
{
    int number1 = 100;
    int number2 = 200;

	DisplayValues("Before Swapping", number1, number2);
	SwapValues(number1, number2);
	DisplayValues("After Swapping", number1, number2);
    //Write your logic here
}

