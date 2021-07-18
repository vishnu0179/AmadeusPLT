#include <string>

using namespace std;

#include "Address.h"

namespace Lab3
{
    string Address::GetLine1()
	{
		return _line1;
	}

	void Address::SetLine1(string line)
	{
		_line1 = line;
	}

    string Address::GetLine2()
	{
		return _line2;
	}

	void Address::SetLine2(string line)
	{
		_line2 = line;
	}

    string Address::GetCity()
	{
		return _city;
	}

	void Address::SetCity(string city)
	{
		_city = city;
	}

    string Address::GetPincode()
	{
		return _pincode;
	}

	void Address::SetPincode(string pincode)
	{
		_pincode = pincode;
	}

}