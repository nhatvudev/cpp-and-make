#include "myclasses.h"
#include <iostream>


Soldier::Soldier(string name, string rank)
{
	this->name = name;
	this->rank = rank;
}

Soldier::~Soldier()
{
	for (Soldier* element : subordinates)
		delete element;
	subordinates.clear();
}

void Soldier::add(Soldier *soldier)
{
	subordinates.push_back(soldier);
}

vector<Soldier*>& Soldier::getSuborinates()
{
	return subordinates;
}

void Soldier::displayInfo()
{
	std::cout << "Name: " << name << "," << " rank: " << rank << '\n';
}

void Soldier::displaySubordinateInfo()
{
	for (Soldier *sub : subordinates) {
		sub->displayInfo();
		sub->displaySubordinateInfo();
	}
}