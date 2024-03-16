#include "myclasses.h"

#include <iostream>
#include <regex>
#include <string>


int main()
{
	auto model = std::make_shared<Model>();
	model->attach(std::make_shared<BinaryView>());
	model->attach(std::make_shared<HexView>());

	model->setState(10);
	model->setState(15);
	
    return 0;
}

