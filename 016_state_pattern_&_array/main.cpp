#include "myclasses.h"

#include <iostream>
#include <regex>
#include <string>


using std::cin;
using std::cout;
using std::string;
using std::regex;


int main()
{
	FSM* pFSM = new FSM();

	while (true)
	{
		pFSM->output();

		if (pFSM->getCurrent() == 4)
			return 0;

		cout << "Input message (0/1): ";

		string strMsg;
		regex pattern("[01]");

		cin >> strMsg;
		cin.ignore();

		if (!regex_match(strMsg, pattern)) 
		{
			cout << "wrong format\n";
			break;
		}

		int msg = stoi(strMsg);
		pFSM->input(msg);
	}

    return 0;
}

