#pragma once
#include <iostream>
using namespace std;

__interface Unit
{
	void spawn(int hp, int damage);
};

class Marine
	:public Unit
{
public:
	void spawn(int hp, int damage) {
		cout << "Marine Unit:\n";
		cout << "\tHP:\t\t" << hp << endl;
		cout << "\tDamage:\t\t" << damage << endl;
		cout << "\tHas a lot of health and average damage" << endl;
	}
};
class CrazyScientist
	:public Unit
{
public:
	void spawn(int hp, int damage) {
		cout << "Crazy Scientist Unit:\n";
		cout << "\tHP:\t\t" << hp << endl;
		cout << "\tDamage:\t\t" << damage << endl;
		cout << "\tHas small health but big damage" << endl;
	}
};
class MilitaryDoctor
	:public Unit
{
public:
	void spawn(int hp, int damage) {
		cout << "Military Doctor Unit:\n";
		cout << "\tHP:\t\t" << hp << endl;
		cout << "\tDamage:\t\t" << damage << endl;
		cout << "\tHas small health and damage but can heal the unit" << endl;
	}
};

