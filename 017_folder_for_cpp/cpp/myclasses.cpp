#include "myclasses.h"

#include <iostream>

FSM::FSM()
{
	current = 0;
	pStates[0] = new State0();
	pStates[1] = new State1();
	pStates[2] = new State2();
	pStates[3] = new State3();
	pStates[4] = new State4();
}

int FSM::getCurrent()
{
	return current;
}

void FSM::input(int msg)
{
	current = transitions[current][msg];
}

void FSM::output()
{
	pStates[current]->output();
}


void State0::output()
{
	std::cout << "Begin\n";
}

void State1::output()
{
	std::cout << "Detected 1\n";
}

void State2::output()
{
	std::cout << "Detected 10\n";
}

void State3::output()
{
	std::cout << "Detected 101\n";
}

void State4::output()
{
	std::cout << "Detected 1010\n";
}