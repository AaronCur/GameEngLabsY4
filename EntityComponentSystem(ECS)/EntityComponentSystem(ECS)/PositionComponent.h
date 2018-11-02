#pragma once
#include <vector>
#include "Component.h"
class PositionComponent : public Component
{
	
public:
	PositionComponent() : positionX(100.0f), positionY(100.0f) {};

	/*Data only*/
	int getPositionX() {
		return positionX;
	}

	int getPositionY() {
		return positionY;
	}

	void setPosition(float x, float y) {
		this->positionX = x;
		this->positionY = y;
	}
	int getID()
	{
		return id;
	}
private:
	float positionX;
	float positionY;
	int id = 2;
};