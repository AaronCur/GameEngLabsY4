#include "EntityComponent.h"
#include "Component.h"
#include "HealthSystem.h"
#include "HealthComponent.h"
#include "PositionComponent.h"
#include "PositionSystem.h"
int main(void*)
{
	Entity player;
	player.addComponent(new HealthComponent());
	player.addComponent(new PositionComponent());


	Entity alien;
	alien.addComponent(new HealthComponent());
	alien.addComponent(new PositionComponent());

	Entity dog;
	dog.addComponent(new HealthComponent());
	dog.addComponent(new PositionComponent());

	Entity cat;
	cat.addComponent(new HealthComponent());
	cat.addComponent(new PositionComponent());
	//HealthComponent *hc;
	//PositionComponent *pc;

	

	HealthSystem hs; 
	PositionSystem ps;

	hs.addEntity(player);
	hs.addEntity(alien);
	hs.addEntity(dog);
	hs.addEntity(cat);

	ps.addEntity(player);
	ps.addEntity(alien);
	ps.addEntity(dog);
	ps.addEntity(cat);


	while (true)
	{
		hs.update();
		ps.update();
	}
}