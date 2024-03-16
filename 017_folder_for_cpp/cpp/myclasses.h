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
		int transitions[4][2] = {{0, 1}, {2, 1}, {0, 3}, {4, 0}};

	public:
		FSM();

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