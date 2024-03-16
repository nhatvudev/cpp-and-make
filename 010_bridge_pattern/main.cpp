#include "myclasses.h"

#include <iostream>
#include <typeinfo>

int main()
{
	std::shared_ptr<Color> pRed = std::make_shared<Red>();
	std::shared_ptr<Circle>  pCircle = std::make_shared<Circle>(pRed);

	std::shared_ptr<Color> pBlue = std::make_shared<Blue>();
	std::shared_ptr<Square> pRect = std::make_shared<Square>(pBlue);

	pCircle->display();
	pRect->display();

    return 0;
}

