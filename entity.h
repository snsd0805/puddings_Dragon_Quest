#include "skill.h"
#include "status.h"

//#ifndef ENTITY_H
//#define ENTITY_H


class Entity //interface
{
	protected:
		int maxhp;
		int hp;
		int atk;
		int ap;

		Entity *enemy;
		Entity *self;

	public:
		int get_atk();
		void set_enemy(Entity *enemy,Entity *self);
		virtual void hurt(int rate)=0;
		virtual void recover(int rate)=0;
};



class Hero : public Entity	//product
{
	public:
		Hero(int choice);
		bool skill(int choice);
		void showskill();
		void rest();
		virtual void recover(int rate);
		virtual void hurt(int rate);
	private:
		Skill *skilllist[12];
};




class Dragon : public Entity	//product
{
	public:
		Dragon(int choice);
		virtual void recover(int rate);
		virtual void hurt(int rate);
	private:
};

//#endif