#ifndef MY_CLASSES

#define MY_CLASSES

#include <list>
#include <memory>

class Model;

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