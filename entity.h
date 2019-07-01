#include "skill.h"

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

	public:
		void set_enemy(Entity *enemy);
		void hurt(int rate);
		void recover(int rate);
};



class Hero : public Entity	//product
{
	public:
		Hero(int choice);
		bool skill(int choice);
		void showskill();
		void rest();
	private:
		Skill *skilllist[12];
};




class Dragon : public Entity	//product
{
	public:
		Dragon(int choice);
	private:
};

//#endif