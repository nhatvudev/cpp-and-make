#ifndef MY_CLASSES

#define MY_CLASSES

class Rectangle1
{
	private:
		int top;
		int right;
		int bottom;
		int left;

	public:
		void setPosition1(int top, int right, int bottom, int left);
		void displayInfo1();
};

class IRectangle1
{
	public:
		virtual void setPosition1(int top, int right, int bottom, int left) = 0;
		virtual void displayInfo1() = 0;
};

class Rectangle2
{
	private:
		int x;
		int y;
		int width;
		int height;
	
	public:
		Rectangle2(int x, int y, int w, int h);
		
		void setPoisition2(int x, int y);
		void setSize2(int width, int height);
		void displayInfo2();
};

class Adapter : public IRectangle1
{
	private:
		Rectangle2 rect2;

	public:
		Adapter();

		virtual void setPosition1(int top, int right, int bottom, int left) override;
		virtual void displayInfo1() override;
};

#endif //MY_CLASSES