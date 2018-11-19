#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;

	std::vector<int> v = { 7,2,3,4,5,6 };

	int val = 1;

	std::cout << p.testRecurring(v) << std::endl;
	assert(p.testRecurring(v) == 1);
	std::cout << p.testRecurringVal(v, val) << std::endl;
	assert(p.testRecurringVal(v, val) == 1);
	std::cout << p.testRange(v) << std::endl;
	assert(p.testRange(v) == 1);
	std::cout << p.testRangeVal(val) << std::endl;
	assert(p.testRangeVal(val) == 1);
	std::cout << p.testSize(v) << std::endl;
	assert(p.testSize(v) == 1);
	
	cin.get();
}