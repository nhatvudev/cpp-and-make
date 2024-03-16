#include "fsm.h"

#include <iostream>
#include <regex>
#include <string>


using std::cin;
using std::cout;
using std::string;
using std::regex;

void test()
{
	std::shared_ptr<Context> context = std::make_shared<Context>();
	std::shared_ptr<FSM> stateMachine = std::make_shared<FSM>(context);

	while (!stateMachine->isFinalState())
	{
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
		stateMachine->input((Input) msg);
	}
}

int main()
{
	test();
	// std::cout << "All State, FSM and Context must be destroyed now()\n";

    return 0;
}




