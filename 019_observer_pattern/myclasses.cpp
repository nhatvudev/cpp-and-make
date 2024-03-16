#include "myclasses.h"

#include <iostream>
#include <string>
#include <bitset>
#include <sstream>


void BinaryView::update(std::shared_ptr<Model> model)
{
	int state = model->getState();
	std::string s = std::bitset<8>(state).to_string();
	std::cout << "Binary View: 0b" << s << '\n';
}

void HexView::update(std::shared_ptr<Model> model)
{
	int state = model->getState();
    std::ostringstream ss;
    ss << std::hex << state;
    std::string result = ss.str();
 
	std::cout << "Hex View: 0h" << result << '\n';
}


Model::Model() 
{

}

Model::~Model()
{
	observers.clear();
}

void Model::setState(int state)
{
	std::cout << "State: " << state << '\n';
	this->state = state;
	notifyObserver();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

int Model::getState()
{
	return state;
}

void Model::attach(std::shared_ptr<ModelObserver> observer) {
	observers.push_back(observer);
}

void Model::notifyObserver()
{
	for (auto it = observers.begin(); it not_eq observers.end(); it++)
	{
		(*it)->update(shared_from_this());
	}
}