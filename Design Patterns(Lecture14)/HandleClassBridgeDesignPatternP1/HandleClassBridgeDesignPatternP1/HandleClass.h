#pragma once
#include <iostream>
using namespace std;

class Charachter
{
public:
	Charachter(){}
	void Print() {
		cout << "Printing charachter" << endl;
	}
};

class HandleToCharachter
{
public:
	HandleToCharachter() : charachter(new Charachter()){}
	Charachter* operator -> () { return charachter;}

private:
	Charachter* charachter;
};