#include "myclasses.h"

#include <iostream>
#include <regex>
#include <string>


int main()
{
	auto mediator = std::make_shared<ApplicationMediator>();
	auto desktop = std::make_shared<DesktopColleague>(mediator);
	auto mobile = std::make_shared<MobileColleague>(mediator);

	mediator->addColleague(desktop);
	mediator->addColleague(mobile);

	desktop->send("Hello World. I am desktop.");
	mobile->send("Hi. I am mobile");
	
    return 0;
}

