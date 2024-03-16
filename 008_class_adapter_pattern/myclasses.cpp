#include "myclasses.h"

#include <iostream>
#include <vector>

void Rectangle1::setPosition1(int top, int right, int bottom, int left)
{
	this->top = top;
	this->right = right;
	this->bottom = bottom;
	this->left = left;
}

void Rectangle1::displayInfo1()
{
	std::cout << "Top = " << top << "\nRight = " << right 
		<< "\nBottom = " << bottom << "\nLeft = " << left << '\n';
}


Rectangle2::Rectangle2(int x, int y, int width, int height)
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

void Rectangle2::setPoisition2(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Rectangle2::setSize2(int width, int height)
{
	this->width = width;
	this->height = height;
}

void Rectangle2::displayInfo2()
{
	std::cout << "x = " << x << "\ny = " << y 
		<< "\nwidth = " << width << "\nheight = " << height << '\n';
}



Adapter::Adapter(): Rectangle2(0, 0, 0, 0)
{

}

void Adapter::setPosition1(int top, int right, int bottom, int left)
{
	Rectangle2::setPoisition2(left, top);
	Rectangle2::setSize2(right - left, bottom - left);
}

void Adapter::displayInfo1()
{
	Rectangle2::displayInfo2();
}