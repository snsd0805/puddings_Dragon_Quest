#include <iostream>
using namespace std;

class Skill	//interface 
{
	public:
		void reset();// abstrace func, every son use themeself
		void cdCount();// must be used function
		void use();	// may be a abstract function

		string get_name();
		int get_cd();
		int get_nowCd();
	protected:
		string name;
		int cd;
		int nowCd = 0;
		int status = 1; //1 can,0 can't
};

class Attack : public Skill   //product
{
	public: 
		Attack();
		void reset();
	private:
};
class DoubleAttack : public Skill   //product
{
	public: 
		DoubleAttack();
		void reset();
	private:
};
class Defense : public Skill   //product
{
	public: 
		Defense();
		void reset();
	private:
};

class Freeze : public Skill   //product
{
	public: 
		Freeze();
		void reset();
	private:
};

class Fire : public Skill   //product
{
	public:
		Fire();
		void reset();
	private:
};

class Swipe : public Skill   //product
{
	public:
		Swipe();
		void reset();
	private:
};

class Dizzy : public Skill   //product
{
	public:
		Dizzy();
		void reset();
	private:
};

class Blood : public Skill   //product
{
	public:
		Blood();
		void reset();
	private:
};


class Shield : public Skill   //product
{
	public:
		Shield();
		void reset();
	private:
};

class Cure : public Skill   //product
{
	public:
		Cure();
		void reset();
	private:
};

class Treat : public Skill   //product
{
	public:
		Treat();
		void reset();
	private:
};

class Pow : public Skill   //product
{
	public:
		Pow();
		void reset();
	private:
};


