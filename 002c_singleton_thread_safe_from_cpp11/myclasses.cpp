#include "myclasses.h"

MyClass* MyClass::pInstance = nullptr;

MyClass::MyClass()
{
	std::cout << "MyClass()\n";
}

MyClass& MyClass::getInstance()
{
	static MyClass instance;
	return instance;
}

void MyClass::MyFunction1()
{
	std::cout << "MyFunction1\n";
}