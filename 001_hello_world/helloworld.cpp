#include <stdio.h>
#include <iostream>

#include "myclasses.h"

using namespace std;


int main()
{
	printf("Hello World\n");

	MyClass::getInstance()->MyFunction1();

    return 0;
}

