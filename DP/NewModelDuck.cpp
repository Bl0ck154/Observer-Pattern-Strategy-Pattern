#include "NewModelDuck.h"



NewModelDuck::NewModelDuck()
{
	flyBehavior = new FlyNoWay();
	quackBehavior = new Squeak();
}

void NewModelDuck::display()
{
	cout << "I'm newModelDuck\n";
}

NewModelDuck::~NewModelDuck()
{
	delete flyBehavior;
	delete quackBehavior;
}
