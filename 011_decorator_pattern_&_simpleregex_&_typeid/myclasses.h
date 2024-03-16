#ifndef MY_CLASSES

#define MY_CLASSES

#include <memory>

class Human
{
	public:
		virtual void attack() = 0;
};

class Knight : public Human
{
	public:
		void attack();
};

class Spearman : public Human
{
	public:
		void attack();
};



class EquippedHuman : public Human
{
	protected:
		std::shared_ptr<Human> pHuman;
};

class HumanWithBow : public EquippedHuman
{
	public:
		HumanWithBow(std::shared_ptr<Human> pHuman);
		virtual void attack() override;
		virtual void rangeAttack();
};

#endif //MY_CLASSES