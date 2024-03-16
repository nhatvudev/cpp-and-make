/* Transition table: 
	*---------------------------------------*
	|			 	| 		next state		|
	| current state	|-----------*-----------|
	|				|  input 0	|	input 1	|
	*---------------------------------------*
	| State0		| State0	| State1	|
	| State1		| State2	| State1	|
	| State2		| State0	| State3	|
	| State3		| State4	| State1	|
	| State4		|			|			|
	*---------------------------------------*
*/


#ifndef FSM_H_
#define FSM_H

#include <iostream>
#include <string>
#include <memory>
#include <map>

enum class Input
{
	EVENT_0,
	EVENT_1,
	EVENT_2,
};

class State;
class State0;
class State1;
class State2;
class State3;
class State4;

class Context
{
	private:
		int count;
	public:
		Context()
		{
			count = 0;
		}
		void increaseCount()
		{
			count++;
			std::string time;
			if (count == 1) time = " time"; else time = " times";
			std::cout << "You input " << count <<  time << '\n';
		}
		int getCount()
		{
			return count;
		}
};

class FSM
{
	private:
		std::shared_ptr<State> currentState;

	public:
		FSM(std::shared_ptr<Context> context);

		void input(Input event);
		bool isFinalState();
};


class State
{
	protected:
		std::shared_ptr<Context> context;
	
	public:
		State(std::shared_ptr<Context> context)
		{
			this->context = context;
		}


	public:
		virtual void entry() {}
		virtual std::shared_ptr<State> handleInput(Input event) {return nullptr;}
		virtual void exit() {}
};

class State0 : public State
{
	public:
		State0(std::shared_ptr<Context> context);

		virtual void entry() override;
		virtual std::shared_ptr<State> handleInput(Input event) override;	
};

class State1 : public State
{
	public:
		State1(std::shared_ptr<Context> context);
		virtual void entry() override;
		virtual std::shared_ptr<State> handleInput(Input event) override;	
};


class State2 : public State
{
	public:
		State2(std::shared_ptr<Context> context);
		virtual void entry() override;
		virtual std::shared_ptr<State> handleInput(Input event) override;	
};

class State3 : public State
{
	public:
		State3(std::shared_ptr<Context> context);
		virtual void entry() override;
		virtual std::shared_ptr<State> handleInput(Input event) override;	
};

class State4 : public State
{
	public:
		State4(std::shared_ptr<Context> context);
		virtual void entry() override;
		virtual std::shared_ptr<State> handleInput(Input event) override;	
};


#endif //FSM_H_