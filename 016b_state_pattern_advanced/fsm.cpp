#include "fsm.h"

#include <iostream>
#include <typeinfo>

using std::cout;

FSM::FSM(std::shared_ptr<Context> context)
{
	currentState = std::make_shared<State0>(context);
	currentState->entry();
}

void FSM::input(Input event)
{
	auto nextState = currentState->handleInput(event);
	if (nextState != nullptr)
	{
		currentState->exit();
		currentState = nextState;
		currentState->entry();
	}
}

bool FSM::isFinalState()
{
	if (typeid(*currentState) == typeid(State4))
		return true;
	else
		return false;
}

/*------------------------------------------------*/

State0::State0(std::shared_ptr<Context> context) : State(context)
{

}

void State0::entry()
{
	cout << "Begin\n";
}

std::shared_ptr<State> State0::handleInput(Input event)
{
	context->increaseCount();
	switch (event)
	{
		case Input::EVENT_0:
			return std::make_shared<State0>(context);

		case Input::EVENT_1:
			return std::make_shared<State1>(context);

		default:
			return nullptr;
	}
}

/*------------------------------------------------*/

State1::State1(std::shared_ptr<Context> context) : State(context)
{

}

void State1::entry()
{
	cout << "Detected 1\n";
}

std::shared_ptr<State> State1::handleInput(Input event)
{
	context->increaseCount();
	switch (event)
	{
		case Input::EVENT_0:
			return std::make_shared<State2>(context);

		case Input::EVENT_1:
			return std::make_shared<State1>(context);
		
		default:
			return nullptr;
	}
}

/*------------------------------------------------*/

State2::State2(std::shared_ptr<Context> context) : State(context)
{

}

void State2::entry()
{
	cout << "Detected 10\n";
}

std::shared_ptr<State> State2::handleInput(Input event)
{
	context->increaseCount();
	switch (event)
	{
		case Input::EVENT_0:
			return std::make_shared<State0>(context);

		case Input::EVENT_1:
			return std::make_shared<State3>(context);
			
		default:
			return nullptr;
	}
}

/*------------------------------------------------*/

State3::State3(std::shared_ptr<Context> context) : State(context)
{

}

void State3::entry()
{
	cout << "Detected 101\n";
}

std::shared_ptr<State> State3::handleInput(Input event)
{
	context->increaseCount();
	switch (event)
	{
		case Input::EVENT_0:
			return std::make_shared<State4>(context);

		case Input::EVENT_1:
			return std::make_shared<State1>(context);

		default:
			return nullptr;
	}
}

/*------------------------------------------------*/

State4::State4(std::shared_ptr<Context> context) : State(context)
{

}

void State4::entry()
{
	cout << "Detected 1010\n";
}

std::shared_ptr<State> State4::handleInput(Input event)
{
	context->increaseCount();
	return nullptr;
}

/*------------------------------------------------*/
