#include "myclasses.h"

#include <iostream>

int main()
{
	BaseClass *pBaseClass = new DerivedClass();
	pBaseClass->Function1();
	pBaseClass->Function2();
    return 0;
}

