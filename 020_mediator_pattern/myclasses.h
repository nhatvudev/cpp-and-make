#ifndef MY_CLASSES

#define MY_CLASSES

#include <list>
#include <memory>
#include <string>


using std::string;

class Model;

class Colleague;


class Mediator
{
	public:
		virtual void send(string message, std::shared_ptr<Colleague> colleague) = 0;
};

class Colleague : public std::enable_shared_from_this<Colleague>
{
	private:
		std::shared_ptr<Mediator> mediator;

	public:
		Colleague(std::shared_ptr<Mediator> mediator)
		{
			this->mediator = mediator;
		}

		//send a message via the mediator
		void send(string message);

		virtual void receive(string message) = 0;
};


class ApplicationMediator : public Mediator
{
	private:
		std::list<std::shared_ptr<Colleague>> colleagues;

	public:
		void addColleague(std::shared_ptr<Colleague> colleague);
		virtual void send(string message, std::shared_ptr<Colleague> originator) override;
};


class DesktopColleague : public Colleague
{
	public:
		DesktopColleague(std::shared_ptr<Mediator> mediator);
		void receive(string message) override;
};

class MobileColleague : public Colleague
{
	public:
		MobileColleague(std::shared_ptr<Mediator> mediator);
		void receive(string message) override;
};




class ModelObserver
{
	public:
		virtual void update(std::shared_ptr<Model> model) = 0;
};

class Model : public std::enable_shared_from_this<Model>
{
	private:
		std::list<std::shared_ptr<ModelObserver>> observers;
		int state;

	public:
		Model();
		~Model();

		void setState(int state);
		int getState();
		void attach(std::shared_ptr<ModelObserver> observer);
		void notifyObserver();
};

class BinaryView : public ModelObserver
{
	public:
		virtual void update(std::shared_ptr<Model> model) override;	
};

class HexView : public ModelObserver
{
	public:
		virtual void update(std::shared_ptr<Model> model) override;	
};

#endif //MY_CLASSES