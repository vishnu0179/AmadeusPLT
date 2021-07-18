#include <iostream>
using namespace std;

#include "Decimal.h"

using namespace Lab8;

int main(int argc, char *argv[])
{
    double number = 0.0;
    //Accept the value through command prompt
    number = stod(argv[1]);

    //Display the whole and the fractional part from the given number
    cout << "Number entered is : " << number << endl;
    cout << "Whole part of the given number is : " << Decimal::GetWhole(number) << endl;
    cout << "Fractional part of the given number is : " << Decimal::GetFraction(number) << endl;
	cout << "The Whole part is Odd : ";
    if(Decimal::IsOdd(number))
    {
        cout<<"Yes"<<endl;
    }
    else 
    {
        cout<<"No"<<endl;
    }

}