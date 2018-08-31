#pragma once
#include "QuackBehavior.h"
#include "Header.h"
class QuackMute :
	public QuackBehavior
{
public:
	QuackMute();
	void quack();
	~QuackMute();
};

