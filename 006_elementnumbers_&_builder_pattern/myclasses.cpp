#include "myclasses.h"

#include <iostream>
#include <vector>


ElementNumbers::ElementNumbers(int* pElementNumbers, int length)
{
	this->pElementNumbers = pElementNumbers;
	this->length = length;
}

int ElementNumbers::getCount() 
{
	return this->length;
}
		
int ElementNumbers::getElementNumberAt(int i) 
{
	return this->pElementNumbers[i];
}



ElementNumbers::Builder ElementNumbers::Builder::set(int max)
{
	this->max = max;
	return *this;
}

bool ElementNumbers::Builder::isElementNumber(int n)
{
	if (n <= 2)
		return true;
	
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return false;
	}
	
	return true;
}

ElementNumbers* ElementNumbers::Builder::build()
{
	std::vector<int> elementNumberVector;
	for (int i = 0; i <= max; i++)
	{
		if (isElementNumber(i))
			elementNumberVector.push_back(i);
	}

	int length = elementNumberVector.size();
	int* pElementNumbers = new int[length];

	for (int i = 0; i < length; i++)
		pElementNumbers[i] = elementNumberVector[i];

	return new ElementNumbers(pElementNumbers, length);
}