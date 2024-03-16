#include "myclasses.h"

MyClass* MyClass::pInstance = nullptr;

MyClass::MyClass()
{
	cout << "MyClass()" << endl;
}

MyClass* MyClass::getInstance()
{
	if (pInstance == nullptr)
		pInstance = new MyClass();
	return pInstance;
}

void MyClass::MyFunction1()
{
	cout << "MyFunction1" << endl;
}