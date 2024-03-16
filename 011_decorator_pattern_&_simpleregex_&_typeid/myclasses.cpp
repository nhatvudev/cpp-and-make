#include "myclasses.h"

#include <iostream>
#include <regex>
#include <typeinfo>

void Knight::attack()
{
	std::cout << "Knight slashed\n";
}

void Spearman::attack()
{
	std::cout << "Spearman stabbed\n";
}




HumanWithBow::HumanWithBow(std::shared_ptr<Human> pHuman)
{
	this->pHuman = pHuman;
}

void HumanWithBow::attack()
{
	std::string str;
	std::regex pattern("[yYnN]");

	while (true)
	{
		std::cout << "Range attack (y/n)?__";
		std::cin >> str;

		if (regex_match(str, pattern))
			break;
		else
			std::cout << "Wrong input format\n";
	}

	if (str.compare("y") == 0 || str.compare("Y") == 0)
		rangeAttack();
	else
		pHuman->attack();
}

void HumanWithBow::rangeAttack()
{
	if (typeid(*pHuman) == typeid(Knight))
		std::cout << "Knight ";
	else
		std::cout << "Spearman ";

	std::cout << "fired an arrow\n";
}