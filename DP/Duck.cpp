#include "Duck.h"



Duck::Duck()
{
}

void Duck::swim()
{
	cout << "I'm swimming\n";
}

void Duck::performQuack()
{
	quackBehavior->quack();
}

void Duck::setPerformQuack(QuackBehavior * quackBehavior)
{
	this->quackBehavior = quackBehavior;
}

void Duck::performfly()
{
	flyBehavior->fly();
}

void Duck::setPerformFly(FlyBehavior * flyBehavior)
{
	this->flyBehavior = flyBehavior;
}



Duck::~Duck()
{
}
