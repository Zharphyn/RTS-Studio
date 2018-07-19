#pragma once
#include <vector>
#include "Unit.h"

enum eUnitType { FireUnit };

class Army
{
public:
	Army();
	~Army();

	std::vector<Unit*> mUnits;

	// your unit factory
	Unit* CreateUnit(eUnitType type);
	
	

};

