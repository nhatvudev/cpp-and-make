#ifndef MY_CLASSES

#define MY_CLASSES

#include <memory>

class Color
{
	public:
		virtual void fill() = 0;
};

class Red : public Color
{
	public:
		virtual void fill() override;
};

class Blue : public Color
{
	public:
		virtual void fill() override;
};


class MyGraphics
{
	private:
		std::shared_ptr<Color> pColor;

	public:
		MyGraphics(std::shared_ptr<Color>  pColor);

		virtual void draw() = 0;

		virtual void display();
};

class Circle : public MyGraphics
{
	public:
		Circle(std::shared_ptr<Color>  pColor);
		virtual void draw() override;
};

class Square : public MyGraphics
{
	public:
		Square(std::shared_ptr<Color>  pColor);
		virtual void draw() override;
};


#endif //MY_CLASSES