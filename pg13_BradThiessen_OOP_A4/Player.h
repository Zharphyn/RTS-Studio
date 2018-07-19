#pragma once
#include "Army.h"

class Player
{
public:
	Player();
	virtual ~Player();

	virtual void Run();

	Army mArmy;

};

