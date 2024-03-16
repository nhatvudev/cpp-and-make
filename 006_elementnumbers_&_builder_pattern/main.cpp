#include <stdio.h>
#include <iostream>

#include "myclasses.h"

using namespace std;

int main()
{
	ElementNumbers::Builder builder;
	ElementNumbers* elementNumbers = builder.set(20).build();

	for (int i = 0; i < elementNumbers->getCount(); i++)
		cout << elementNumbers->getElementNumberAt(i) << endl;

    return 0;
}

