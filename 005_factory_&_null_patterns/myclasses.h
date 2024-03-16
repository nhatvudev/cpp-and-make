#ifndef MY_CLASSES

#define MY_CLASSES

#include <memory>

class Shape
{
	public:
		virtual void displayShape() = 0;
};

class Circle : public Shape
{
	public:
		virtual void displayShape() override;
};

class Square : public Shape
{
	public:
		virtual void displayShape() override;
};

class NullShape : public Shape
{
	public:
		virtual void displayShape() override;
};

class ShapeFactory
{
	public:
		static const int SHAPE_CIRCLE = 0;
		static const int SHAPE_SQUARE = 1;

	public:
		std::shared_ptr<Shape> createShape(int shape);
};

#endif //MY_CLASSES