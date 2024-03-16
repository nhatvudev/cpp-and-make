#ifndef MY_CLASSES

#define MY_CLASSES

class State;
class State1;
class State2;
class State3;
class State4;

class FSM
{
	private:
		static const int STATE_NUM = 5;

	private:
		int current;
		State* pStates[5];
		int transitions[4][2] = {{0, 1}, {2, 1}, {0, 3}, {4, 1}};

// This state machine is used to detect array: 1010
/* The above matrix is equivalent to the following table 
	*---------------------------------------*
	|			 	| 		next state		|
	| current state	|-----------*-----------|
	|				|  input 0	|	input 1	|
	*---------------------------------------*
	| State0		| State0	| State1	|
	| State1		| State2	| State1	|
	| State2		| State0	| State3	|
	| State3		| State4	| State0	|
	*---------------------------------------*
*/
	public:
		FSM();
		~FSM();

		int getCurrent();
		void input(int msg);
		void output();
};

class State
{
	public:
		virtual void output() = 0;
};

class State0 : public State
{
	public:
		void output();
};

class State1 : public State
{
	public:
		void output();
};

class State2 : public State
{
	public:
		void output();
};

class State3 : public State
{
	public:
		void output();
};

class State4 : public State
{
	public:
		void output();
};

#endif //MY_CLASSES