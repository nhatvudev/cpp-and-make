#include "myclasses.h"

#include <iostream>
#include <string>
#include <bitset>
#include <sstream>


void Colleague::send(string message)
{
	mediator->send(message, shared_from_this());
}


void ApplicationMediator::addColleague(std::shared_ptr<Colleague> colleage)
{
	colleagues.push_back(colleage);
}

void ApplicationMediator::send(string message, std::shared_ptr<Colleague> originator)
{
	for (auto it = colleagues.begin(); it not_eq colleagues.end(); it++)
	{
		if ((*it) not_eq originator)
		{
			(*it)->receive(message);
		}
	}
}



DesktopColleague::DesktopColleague(std::shared_ptr<Mediator> mediator) : Colleague(mediator)
{

}

void DesktopColleague::receive(string message)
{
	std::cout << "Colleague received: " << message << '\n';
}


MobileColleague::MobileColleague(std::shared_ptr<Mediator> mediator) : Colleague(mediator)
{

}

void MobileColleague::receive(string message)
{
	std::cout << "MobileColleague received: " << message << '\n';
}

