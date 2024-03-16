#include "myclasses.h"

#include <iostream>


using std::cout;

void SwordMan::attack(std::shared_ptr<AttackedTarget> pTarget)
{
	pTarget->beAttackedBy(shared_from_this());
}

void SwordMan::beAttackedBy(std::shared_ptr<SwordMan> pSwordMan)
{

}

void SwordMan::beAttackedBy(std::shared_ptr<Wizard> pWizard)
{

}

void SwordMan::beAttackedBy(std::shared_ptr<Zombie> pZombie)
{
	cout << "Swordman was attacked by Zombie\n";
}

void SwordMan::beAttackedBy(std::shared_ptr<Dracula> pDracula)
{
	cout << "Swordman was attacked by Dracula\n";
}



void Wizard::attack(std::shared_ptr<AttackedTarget> pTarget)
{
	pTarget->beAttackedBy(shared_from_this());
}

void Wizard::beAttackedBy(std::shared_ptr<SwordMan> pSwordMan)
{

}

void Wizard::beAttackedBy(std::shared_ptr<Wizard> pWizard)
{

}

void Wizard::beAttackedBy(std::shared_ptr<Zombie> pZombie)
{
	cout << "Wizard was attacked by Zombie\n";
}

void Wizard::beAttackedBy(std::shared_ptr<Dracula> pDracula)
{
	cout << "Wizard was attacked by Dracula\n";
}




void Zombie::attack(std::shared_ptr<AttackedTarget> pTarget)
{
	pTarget->beAttackedBy(shared_from_this());
}

void Zombie::beAttackedBy(std::shared_ptr<SwordMan> pSwordMan)
{
	cout << "Zombie was attacked by SwordMan\n";
}

void Zombie::beAttackedBy(std::shared_ptr<Wizard> pWizard)
{
	cout << "Zombie was attacked by Wizard\n";
}

void Zombie::beAttackedBy(std::shared_ptr<Zombie> pZombie)
{

}

void Zombie::beAttackedBy(std::shared_ptr<Dracula> pDracula)
{

}




void Dracula::attack(std::shared_ptr<AttackedTarget> pTarget)
{
	pTarget->beAttackedBy(shared_from_this());
}

void Dracula::beAttackedBy(std::shared_ptr<SwordMan> pSwordMan)
{
	cout << "Dracula was attacked by SwordMan\n";
}

void Dracula::beAttackedBy(std::shared_ptr<Wizard> pWizard)
{
	cout << "Dracula was attacked by Wizard\n";
}

void Dracula::beAttackedBy(std::shared_ptr<Zombie> pZombie)
{

}

void Dracula::beAttackedBy(std::shared_ptr<Dracula> pDracula)
{

}