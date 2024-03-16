#ifndef MY_CLASSES

#define MY_CLASSES

#include <memory>

class AttackedTarget;

class SwordMan;
class Wizard;
class Zombie;
class Dracula;

class Attacker
{
	public:
		virtual void attack(std::shared_ptr<AttackedTarget> pTarget) = 0;
};

class AttackedTarget
{
	public:
		virtual void beAttackedBy(std::shared_ptr<SwordMan> pSwordman) = 0;
		virtual void beAttackedBy(std::shared_ptr<Wizard> pWizard) = 0;
		virtual void beAttackedBy(std::shared_ptr<Zombie> pZombie) = 0;
		virtual void beAttackedBy(std::shared_ptr<Dracula> pDracula) = 0;
};



class SwordMan :  public Attacker, public AttackedTarget, 
		public std::enable_shared_from_this<SwordMan>	// must use 'public'
{
	public:
		void attack(std::shared_ptr<AttackedTarget> pTarget) override;
		
		virtual void beAttackedBy(std::shared_ptr<SwordMan> pSwordman) override;
		virtual void beAttackedBy(std::shared_ptr<Wizard> pWizard) override;
		virtual void beAttackedBy(std::shared_ptr<Zombie> pZombie) override;
		virtual void beAttackedBy(std::shared_ptr<Dracula> pDracula) override;
};

class Wizard : public Attacker, public AttackedTarget, 
		public std::enable_shared_from_this<Wizard>		// must use 'public'
{
	public:
		void attack(std::shared_ptr<AttackedTarget> pTarget) override;
		
		virtual void beAttackedBy(std::shared_ptr<SwordMan> pSwordman) override;
		virtual void beAttackedBy(std::shared_ptr<Wizard> pWizard) override;
		virtual void beAttackedBy(std::shared_ptr<Zombie> pZombie) override;
		virtual void beAttackedBy(std::shared_ptr<Dracula> pDracula) override;
};

class Zombie : public Attacker, public AttackedTarget,  
		public std::enable_shared_from_this<Zombie>		// must use 'public'
{
	public:
		void attack(std::shared_ptr<AttackedTarget> pTarget) override;
		
		virtual void beAttackedBy(std::shared_ptr<SwordMan> pSwordman) override;
		virtual void beAttackedBy(std::shared_ptr<Wizard> pWizard) override;
		virtual void beAttackedBy(std::shared_ptr<Zombie> pZombie) override;
		virtual void beAttackedBy(std::shared_ptr<Dracula> pDracula) override;
};

class Dracula : public Attacker, public AttackedTarget, 
		public std::enable_shared_from_this<Dracula>	// must use 'public'
{
	public:
		void attack(std::shared_ptr<AttackedTarget> pTarget) override;
		
		virtual void beAttackedBy(std::shared_ptr<SwordMan> pSwordman) override;
		virtual void beAttackedBy(std::shared_ptr<Wizard> pWizard) override;
		virtual void beAttackedBy(std::shared_ptr<Zombie> pZombie) override;
		virtual void beAttackedBy(std::shared_ptr<Dracula> pDracula) override;
};

#endif //MY_CLASSES