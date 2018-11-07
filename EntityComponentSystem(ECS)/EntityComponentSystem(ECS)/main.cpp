#include "EntityComponent.h"
#include "Component.h"
#include "HealthSystem.h"
#include "HealthComponent.h"
#include "PositionComponent.h"
#include "PositionSystem.h"
#include "RenderSystem.h"
#include "AISystem.h"
int main(void*)
{
	Entity player;
	player.addComponent(new HealthComponent());
	player.addComponent(new PositionComponent());
//	player.addComponent(new ControlComponent());


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
	RenderSystem rs;
	AiSystem ais;

	hs.addEntity(player);
	hs.addEntity(alien);
	hs.addEntity(dog);
	hs.addEntity(cat);

	ps.addEntity(player);
	ps.addEntity(alien);
	ps.addEntity(dog);
	ps.addEntity(cat);

	rs.addEntity(player);
	rs.addEntity(alien);
	rs.addEntity(dog);
	rs.addEntity(cat);

	ais.addEntity(alien);
	ais.addEntity(dog);
	ais.addEntity(cat);



	//SDL_Event event;
	while (true)
	{
		//hs.update();
		//ps.update();
		//rs.update();
		ais.update();
		//cs.update(event);
	}
	
}