class Entity //interface
{
	protected:
		int maxhp;
		int hp;
		int atk;
		int ap;

		int DemageRate;
	public:
		int get_DemageRate();
		void hurt(int rate);
};



class Hero : public Entity	//product
{
	public:
		Hero(int choice);

	private:
		HeroSkillList heroskill;
};




class Dragon : public Entity	//product
{
	public:
		Dragon(int choice);
	private:
};