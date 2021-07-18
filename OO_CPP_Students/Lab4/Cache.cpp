#include <iostream>
using namespace std;

#include "Cache.h"
#include "CustomConsole.h"
namespace Lab4
{
	int Cache::MAX_CAPACITY = 0;

	int Cache::GetMaxCapacity()
	{
		if(MAX_CAPACITY == 0) {
			SetMaxCapacity();
		}
		
		return MAX_CAPACITY;
	}

	void Cache::SetMaxCapacity()
	{
		cout<<"Enter MAX_CAPACITY of cache: ";
		int capacity = CustomConsole::ReadInt();
		MAX_CAPACITY = capacity;
	}
}
