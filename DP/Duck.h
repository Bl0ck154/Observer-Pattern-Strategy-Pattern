#pragma once
#include "Header.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"
class Duck
{
protected:
	FlyBehavior *flyBehavior;
	QuackBehavior *quackBehavior;
public:
	Duck();
	void swim();
	void performQuack();
	void setPerformQuack(QuackBehavior *quackBehavior);
	void performfly();
	void setPerformFly(FlyBehavior *flyBehavior);
	virtual void display() = 0;
	virtual ~Duck()=0;
};

