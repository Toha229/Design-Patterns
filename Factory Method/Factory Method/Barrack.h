#pragma once
#include "Unit.h"
class Barracks abstract
{
public:
	void planUnit(int hp, int damage) {
		Unit* unit = createUnit(hp, damage);
		unit->spawn(hp, damage);
	}
	virtual Unit* createUnit(int hp, int damage) = 0;
};



class MilitaryBarracks
	:public Barracks
{
public:
	Unit* createUnit(int hp, int damage) {
		if(hp >= 20 || damage <= 20)
			return new Marine;
		if (hp < 20 || damage > 20)
			return new CrazyScientist;
	}
};

class MedicalBarracks
	:public Barracks
{
public:
	Unit* createUnit(int hp, int damage) {
		return new MilitaryDoctor;
	}
};

