#ifndef MY_CLASSES

#define MY_CLASSES

#include <iostream>

class MyClass
{
	private:
		static MyClass* pInstance;

		MyClass();

	public:
		static MyClass& getInstance();

		/**
		 * Singletons should not be cloneable.
		 */
		MyClass(MyClass &other) = delete;
		/**
		 * Singletons should not be assignable.
		 */
		void operator=(const MyClass &) = delete;

		void MyFunction1();
};

// extern MyClass* MyClass::pInstance;

#endif //MY_CLASSES