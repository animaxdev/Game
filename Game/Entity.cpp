#include "Entity.h"



Entity::Entity()
{
	pos = { 0, 0 };
	angle = 0;
	size = { 0,0 };
}


Entity::~Entity()
{
}

bool Entity::intersects(Entity* e)
{
	float di = ut::dist(e->getPos(), getPos()), //distanza
		si = (ut::mag(e->getSize()) / 5.f + ut::mag(getSize()) / 5.f); //lunghezza della somma delle size
	return di < si;
}