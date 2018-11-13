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
