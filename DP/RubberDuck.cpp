#include "RubberDuck.h"



RubberDuck::RubberDuck()
{
	flyBehavior = new FlyNoWay();
	quackBehavior = new QuackMute();
}

void RubberDuck::display()
{
	cout << "I'm rubberDuck\n";
}

RubberDuck::~RubberDuck()
{
	delete flyBehavior;
	delete quackBehavior;
}
