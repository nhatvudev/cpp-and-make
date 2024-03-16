#ifndef MY_CLASSES

#define MY_CLASSES

#include <string>
#include <vector>
#include <memory>

using namespace std;

class Soldier {
	private:
		string name;
		string rank;
		vector<Soldier*> subordinates;
	
	public:
		Soldier(string name, string rank);
		~Soldier();

		void add(Soldier *soldier);
		vector<Soldier*> &getSuborinates();
		void displayInfo();
		void displaySubordinateInfo();
};
#endif //MY_CLASSES