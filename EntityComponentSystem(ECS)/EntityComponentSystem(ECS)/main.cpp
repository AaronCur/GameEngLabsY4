#include "EntityComponent.h"
#include "Component.h"
#include "HealthSystem.h"
#include "HealthComponent.h"
#include "PositionComponent.h"
#include "PositionSystem.h"
int main(void*)
{
	Entity player;
	HealthComponent hc;
	PositionComponent pc;

	player.addComponent(hc);
	player.addComponent(pc);

	HealthSystem hs; 
	PositionSystem ps;

	hs.addEntity(player);
	ps.addEntity(player);


	while (true)
	{
		hs.update();
		ps.update();
	}
}