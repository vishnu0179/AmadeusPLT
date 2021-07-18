
#include "Decimal.h"

namespace Lab8
{
	int Decimal::GetWhole(double Number)
    {
		int whole = 0;
		whole = (int) Number;
		return whole;
    }

	double Decimal::GetFraction(double Number)
    {
		double fraction = 0.0;
		fraction = Number - GetWhole(Number);
		return fraction;
    }

	bool Decimal::IsOdd(double Number)
    {
		bool isOdd = false;
		if(GetWhole(Number) & 1) {
			isOdd = true;
		}
		return isOdd;
    }
}
