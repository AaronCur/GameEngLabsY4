#include "Production.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

void enterNumbers(std::vector<int>& m_picked) {

	std::cout << "Please enter your 6 lotto numbers between 1 and 46" << std::endl;
	int a, b, c, d, e, f;
	m_picked.clear();


	std::cin >> a;
	m_picked.push_back(a);
	std::cin >> b;
	m_picked.push_back(b);
	std::cin >> c;
	m_picked.push_back(c);
	std::cin >> d;
	m_picked.push_back(d);
	std::cin >> e;
	m_picked.push_back(e);
	std::cin >> f;
	m_picked.push_back(f);
	std::cout << "\n" << std::endl;


}

void checkNumbers(std::vector<int> m_picked, std::vector<int> m_lottoNum) {

	std::sort(m_picked.begin(), m_picked.end());
	std::sort(m_lottoNum.begin(), m_lottoNum.end());

	std::vector<int> m_common;

	std::set_intersection(m_picked.begin(), m_picked.end(), m_lottoNum.begin(), m_lottoNum.end(), std::back_inserter(m_common));

	if (m_common.size() == 0)
	{
		std::cout << "You have no matching numbers"<< std::endl;

	}
	else {
		std::cout << "Here are your matching numbers" << std::endl;
		for (int i = 0; i < m_common.size(); i++)
		{
			std::cout << m_common[i] << std::endl;
		}

	}
}

int main()
{
	srand(time(NULL));

	Production p;

	std::vector<int> m_picked;
	std::vector<int> m_lottoNum;
	

	while (p.testSize(m_lottoNum) == 0) {

		int val = rand() % 46 + 1;

		if (p.testRecurringVal(m_lottoNum, val) == 1 && p.testRangeVal(val) == 1) {
			m_lottoNum.push_back(val);
		}

	}

	
	enterNumbers(m_picked);

	
	while (p.testRange(m_picked) == 0)
	{
		std::cout << "You have enter numbers outside of 1 - 46" << std::endl;
		enterNumbers(m_picked);

	}

	while (p.testRecurring(m_picked) == 0)
	{
		std::cout << "You have recurring numbers" << std::endl;
		enterNumbers(m_picked);
	}

	std::cout << "\n" << std::endl;
	std::cout << "Here are this weeks winning lotto numbers" << std::endl;

	for (int i = 0; i < m_lottoNum.size(); i++) {

		std::cout << m_lottoNum[i] << std::endl;
	}

	std::cout << "\n" << std::endl;

	checkNumbers(m_picked, m_lottoNum);

	system("PAUSE");
}


