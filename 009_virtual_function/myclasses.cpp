#include "myclasses.h"

#include <iostream>
#include <vector>


void BaseClass::Function1()
{
	std::cout << "BaseClass::Function1()\n" ;
}

void BaseClass::Function2()
{
	std::cout << "BaseClass::Function2()\n";
}

void DerivedClass::Function1()
{
	std::cout << "DerivedClass::Function1()\n";
}

void DerivedClass::Function2()
{
	std::cout << "DerivedClass::Function2()\n";
}