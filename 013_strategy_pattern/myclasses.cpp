#include <iostream>
#include <memory>
#include "myclasses.h"

using namespace std;

Soldier::~Soldier()
{
	weapon = nullptr;
}

void Soldier::equip(shared_ptr<Weapon> weapon)
{
	this->weapon = weapon;
}

void Soldier::remove() 
{
	weapon = nullptr;
}
	
void Soldier::attack() 
{
	if (weapon == nullptr)
		cout << "No Weapton\n";
	else
		cout << "Solder " << weapon->technique() << '\n';
}


////////////////////////////////////////////
string Sword::technique()
{
	return " slashed.";
}

string Bow::technique()
{
	return "fired an arrow.";
}