#ifndef MY_CLASSES

#define MY_CLASSES

class ElementNumbers
{
	public:
		class Builder
		{
			private:
				int max;

			public:
				Builder set(int max);
				ElementNumbers* build();

			private:
				bool isElementNumber(int n);
		};

	private:
		int* pElementNumbers;
		int length;

	private:
		ElementNumbers(int* pElementNumbers, int length);

	public:
		int getCount();
		int getElementNumberAt(int i);

};

#endif //MY_CLASSES