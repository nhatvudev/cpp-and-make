#include "myclasses.h"

#include <mutex>

MyClass* MyClass::pInstance = nullptr;

MyClass::MyClass()
{
	std::cout << "MyClass()\n";
}

MyClass* MyClass::getInstance()
{
	std::mutex mutex;
	if (pInstance == nullptr)
	{
		std::lock_guard<std::mutex> lock(mutex);
		if (pInstance == nullptr)
			pInstance = new MyClass();
	}
	return pInstance;
}

void MyClass::MyFunction1()
{
	std::cout << "MyFunction1\n";
}