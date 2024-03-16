#ifndef MY_CLASSES

#define MY_CLASSES

#include <string>
#include <memory>

using namespace std;

class Weapon {
	public:
		virtual string technique() = 0;
};

class Soldier 
{
	private :
		std::shared_ptr<Weapon> weapon;
	
	public:
		~Soldier();

		void equip(std::shared_ptr<Weapon> weapon);
		void remove();
		void attack();
};

class Sword : public Weapon 
{
	public:
		virtual string technique();
};

class Bow : public Weapon 
{
	public:
		virtual string technique();
};

#endif //MY_CLASSES