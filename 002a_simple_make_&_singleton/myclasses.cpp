#include "myclasses.h"

MyClass* MyClass::pInstance = nullptr;

MyClass::MyClass()
{
	std::cout << "MyClass()\n";
}

MyClass* MyClass::getInstance()
{
	if (pInstance == nullptr)
		pInstance = new MyClass();
	return pInstance;
}

void MyClass::MyFunction1()
{
	std::cout << "MyFunction1\n";
}