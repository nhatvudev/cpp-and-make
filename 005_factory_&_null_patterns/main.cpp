#include "myclasses.h"

#include <iostream>

int main()
{
	ShapeFactory shapeFactory;
	std::shared_ptr<Shape> pCircle = shapeFactory.createShape(ShapeFactory::SHAPE_CIRCLE);
	std::shared_ptr<Shape> pSquare = shapeFactory.createShape(ShapeFactory::SHAPE_SQUARE);
	std::shared_ptr<Shape> pNull = shapeFactory.createShape(100);
	
	pCircle->displayShape();
	pSquare->displayShape();
	pNull->displayShape();

    return 0;
}

