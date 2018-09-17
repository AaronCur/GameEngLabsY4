#include "Charachter.h"

int main(void) {

	DrawAPI* api = new DrawImpl();
	Charachter* charachter = new Player(api);
	charachter->Draw();

	std::cin.get();
}