#include "myclasses.h"
#include <iostream>


void Circle::displayShape()
{
	std::cout << "Circle::displayShape()\n";	
}

void Square::displayShape()
{
	std::cout << "Square::displayShape()\n";
}


void NullShape::displayShape()
{
	std::cout << "NULL SHAPE!!!\n";	
}

std::shared_ptr<Shape> ShapeFactory::createShape(int shape)
{
	switch (shape)
	{
		case ShapeFactory::SHAPE_CIRCLE:
			return std::make_shared<Circle>();

		case ShapeFactory::SHAPE_SQUARE:
			return std::make_shared<Square>();

		default:
			return std::make_shared<NullShape>();
	}
}