#include "RedHeadDuck.h"



RedHeadDuck::RedHeadDuck()
{
	flyBehavior = new FlyWithWings();
	quackBehavior = new Quack();
}

void RedHeadDuck::display()
{
	cout << "I'm readHeadDuck\n";
}


RedHeadDuck::~RedHeadDuck()
{
	delete flyBehavior;
	delete quackBehavior;
}
