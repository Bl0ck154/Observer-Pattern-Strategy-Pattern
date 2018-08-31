#pragma once
#include "QuackBehavior.h"
#include "Header.h"
class Quack :
	public QuackBehavior
{
public:
	Quack();
	void quack();
	~Quack();
};

