#include "myclasses.h"

#include <iostream>


int main()
{
	std::shared_ptr<SwordMan> pSwordman = std::make_shared<SwordMan>();
	std::shared_ptr<Wizard> pWizard = std::make_shared<Wizard>();
	std::shared_ptr<Zombie> pZombie = std::make_shared<Zombie>();
	std::shared_ptr<Dracula> pDracula = std::make_shared<Dracula>();
	
	pSwordman->attack(pZombie);
	pSwordman->attack(pDracula);
	pWizard->attack(pZombie);
	pWizard->attack(pDracula);

	pZombie->attack(pSwordman);
	pZombie->attack(pWizard);
	pDracula->attack(pSwordman);
	pDracula->attack(pWizard);

    return 0;
}

