#pragma once
#include "FlyBehavior.h"
#include "Header.h"
class FlyNoWay :
	public FlyBehavior
{
public:
	FlyNoWay();
	void fly();
	~FlyNoWay();
};

