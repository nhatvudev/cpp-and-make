
#include "myclasses.h"

#include <iostream>
#include <memory>

int main()
{
	std::unique_ptr<Rectangle1> pRect1 = std::make_unique<Rectangle1>();
	pRect1->setPosition1(3, 10, 10, 3);
	pRect1->displayInfo1();
	
	std::cout << "Using adapter:\n";
	std::unique_ptr<IRectangle1> pRect2 = std::make_unique<Adapter>();
	pRect2->setPosition1(3, 10, 10, 3);
	pRect2->displayInfo1();

    return 0;
}

