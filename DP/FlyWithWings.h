#pragma once
#include "FlyBehavior.h"
#include "Header.h"
class FlyWithWings :
	public FlyBehavior
{
public:
	FlyWithWings();
	void fly();
	~FlyWithWings();
};

