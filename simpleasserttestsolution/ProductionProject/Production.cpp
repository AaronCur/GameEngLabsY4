#include "Production.h"
#include <vector>

int Production::testSize(std::vector<int> v)
{
	return v.size() == 6;
}
bool Production::testRecurring(std::vector<int> v)
{
	std::sort(v.begin(), v.end());
	auto it = std::unique(v.begin(), v.end());
	bool wasUnique = (it == v.end());
	return wasUnique;
}

bool Production::testRange(std::vector<int> v) {


	for (auto it = v.begin(); it != v.end(); ++it) {
		
		if ((*it) > 46 || (*it) < 1)
		{
			return 0;
		}
	}

	return 1;

}


bool Production::testRangeVal(int val) {


	if (val <= 46 && val >= 1)
	{
		return 1;
	}

	return 0;

}

bool Production::testRecurringVal(std::vector<int> v, int val) {


	for(int i = 0; i < v.size(); i++)
	{
		if (val == v[i]) {

			return(0);
		}
	}

	return 1;

}