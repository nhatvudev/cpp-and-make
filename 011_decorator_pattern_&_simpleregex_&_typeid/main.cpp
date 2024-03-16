#include "myclasses.h"

#include <stdio.h>
#include <iostream>

int main()
{
	std::shared_ptr<Human> pKnight = std::make_shared<Knight>();
	std::shared_ptr<Human>  pSpearman = std::make_shared<Spearman>();

	pKnight->attack();
	pSpearman->attack();

	std::shared_ptr<Human>  pKnightWithBow = std::make_shared<HumanWithBow>(pKnight);
	std::shared_ptr<Human>  pSpearmanWithBow = std::make_shared<HumanWithBow>(pSpearman);

	pKnightWithBow->attack();
	pSpearmanWithBow->attack();
    return 0;
}

