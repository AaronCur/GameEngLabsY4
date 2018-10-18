#pragma once
#include <iostream>
//Base Class
class Charachter {
public:
		Charachter(){}
		virtual ~Charachter(){}
		virtual void draw() = 0;

};

//Concrete Family
class Player : public Charachter {
public:
	void draw() {
		std::cout << "Draw Player" << std::endl;
	}
};
//Concrete Family
class Boss : public Charachter {
public:
	void draw() {
		std::cout << "Draw Boss" << std::endl;
	}
};

//Defines methods to create concrete (virtual) products 
class Factory {
public:
	virtual Charachter* CreatePlayer() = 0;
	virtual Charachter* CreateOpponents() = 0;
};

//Returns concreter class
class CharachterFactory : public Factory {
public:
	Charachter * CreatePlayer() {
		return new Player;
	}
	Charachter * CreateOpponents() {
		return new Boss;
	}
};