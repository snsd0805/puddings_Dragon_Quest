//#ifndef SKILL_H
//#define SKILL_H
#include <iostream>
using namespace std;


class Entity;

class Skill	//interface 
{
	public:
		virtual void reset();// abstrace func, every son use themeself
		void cdCount();// must be used function
		virtual void use(Entity *enemy);	// may be a abstract function
		string get_name();
		int get_cd();
		int get_nowCd();
		int get_status();
	protected:
		string name;
		int cd;
		int nowCd;
		int status; //1 can,0 can't
};

class Attack : public Skill   //product
{
	public: 
		Attack();
		virtual void use(Entity *enemy);
		virtual void reset();
	private:
};
class DoubleAttack : public Skill   //product
{
	public: 
		DoubleAttack();
		virtual void use(Entity *enemy);
		virtual void reset();
	private:
};
class Defense : public Skill   //product
{
	public: 
		Defense();
		virtual void use(Entity *enemy);
		virtual void reset();
	private:
};

class Freeze : public Skill   //product
{
	public: 
		Freeze();
		virtual void use(Entity *enemy);
		virtual void reset();
	private:
};

class Fire : public Skill   //product
{
	public:
		Fire();
		virtual void use(Entity *enemy);
		virtual void reset();
	private:
};

class Swipe : public Skill   //product
{
	public:
		Swipe();
		virtual void use(Entity *enemy);
		virtual void reset();
	private:
};

class Dizzy : public Skill   //product
{
	public:
		Dizzy();
		virtual void use(Entity *enemy);
		virtual void reset();
	private:
};

class Blood : public Skill   //product
{
	public:
		Blood();
		virtual void use(Entity *enemy);
		virtual void reset();
	private:
};


class Shield : public Skill   //product
{
	public:
		Shield();
		virtual void use(Entity *enemy);
		virtual void reset();
	private:
};

class Cure : public Skill   //product
{
	public:
		Cure();
		virtual void use(Entity *enemy);
		virtual void reset();
	private:
};

class Treat : public Skill   //product
{
	public:
		Treat();
		virtual void use(Entity *enemy);
		virtual void reset();
	private:
};

class Pow : public Skill   //product
{
	public:
		Pow();
		virtual void use(Entity *enemy);
		virtual void reset();
	private:
};


//#endif