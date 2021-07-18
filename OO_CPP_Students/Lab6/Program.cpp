#include <iostream>
using namespace std;

#include "SwapData.h"
#include "CustomConsole.h"
using namespace Lab6;

int main(int argc, char *argv[])
{
    //Accept values from the user
    int number1, number2;
    CustomConsole cc;
    cout<<"Enter Number1: ";
    number1 = CustomConsole::ReadInt();
    cout<<"Enter Number2: ";
    number2 = CustomConsole::ReadInt();
    //Storing the numbers accepted in SwapData object
	SwapData swapObj;
    swapObj.SetNum1(number1);
    swapObj.SetNum2(number2);
    //Display numbers before swapping
    swapObj.DisplayValues("Before Swapping :");

    //Swapping the numbers in the object
    swapObj.SwapValues();

    //Display numbers after swapping
    swapObj.DisplayValues("After Swapping :");
}
