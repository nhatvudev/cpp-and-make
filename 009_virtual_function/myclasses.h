#ifndef MY_CLASSES

#define MY_CLASSES

class BaseClass
{
	public:
		void Function1();
		virtual void Function2();
};

class DerivedClass : public BaseClass
{
	public:
		void Function1();
		virtual void Function2() override;
};

#endif //MY_CLASSES