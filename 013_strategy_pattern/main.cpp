#include <iostream>
#include <memory>

#include "myclasses.h"

using namespace std;

int main()
{
	Soldier soldier;
	soldier.attack();
	
	soldier.equip(std::make_shared<Sword>());
	soldier.attack();
	
	soldier.equip(std::make_shared<Bow>());
	soldier.attack();
	
	soldier.remove();
	soldier.attack();
    return 0;
}

