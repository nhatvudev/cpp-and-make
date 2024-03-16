#include "myclasses.h"

#include <stdio.h>
#include <iostream>



int main()
{
	Soldier *major = new Soldier("Minh Nhat", "major");
	
	Soldier *captain1 = new Soldier("Tu", "Captain");
	major->add(captain1);
	
	Soldier *captain2 = new Soldier("Quang", "Captain");
	major->add(captain2);
	
	Soldier *_2ndLieutenant1 = new Soldier("Duoc", "2nd Lieutenant"); 
	captain1->add(_2ndLieutenant1);
	
	Soldier *_2ndLieutenant2 = new Soldier("Thong", "2nd Lieutenant");
	captain1->add(_2ndLieutenant2);
	
	Soldier *_2ndLieutenant3 = new Soldier("Loc", "2nd Lieutenant");
	captain2->add(_2ndLieutenant3);
	
	Soldier *_2ndLieutenant4 = new Soldier("Hoa", "2nd Lieutenant");
	captain2->add(_2ndLieutenant4);
	
	major->displayInfo();
	major->displaySubordinateInfo();

    return 0;
}

