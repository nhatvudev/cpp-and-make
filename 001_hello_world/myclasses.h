#ifndef MY_CLASSES

#define MY_CLASSES

#include <iostream>

using namespace std;

class MyClass
{
	private:
		static MyClass* pInstance;

		MyClass();

	public:
		static MyClass* getInstance();

		void operator=(const MyClass &) = delete;

		void MyFunction1();
};

// extern MyClass* MyClass::pInstance;

#endif //MY_CLASSES