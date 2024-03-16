#include "myclasses.h"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

MyGraphics::MyGraphics(std::shared_ptr<Color>  pColor)
{
	this->pColor = pColor;
}

void MyGraphics::display()
{
	draw();
	cout << " and ";
	pColor->fill();
}



Circle::Circle(std::shared_ptr<Color>  pColor) : MyGraphics(pColor)
{

}

void Circle::draw()
{
	cout << "Drawed circle";
}

Square::Square(std::shared_ptr<Color>  pColor) : MyGraphics(pColor)
{

}

void Square::draw()
{
	cout << "Drawed square";
}



void Red::fill()
{
	cout << "filled by red" << endl;
}

void Blue::fill()
{
	cout << "filled by blue" << endl;
}