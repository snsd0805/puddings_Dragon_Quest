class Entity //interface
{
	protected:
		int maxhp;
		int hp;
		int atk;
		int ap;

		int DemageRate;		//Has not been used
	public:
		int get_DemageRate();	//Has not been implemented
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
		HeroSkillList skilllist;
};




class Dragon : public Entity	//product
{
	public:
		Dragon(int choice);
	private:
};