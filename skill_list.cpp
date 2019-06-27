#include "skill_list.h"
HeroSkillList::HeroSkillList(){
	this->skill[0]=new Attack;
	this->skill[1]=new DoubleAttack;
	this->skill[2]=new Defense;
	this->skill[3]=new Freeze;
	this->skill[4]=new Fire;
	this->skill[5]=new Swipe;
	this->skill[6]=new Dizzy;
	this->skill[7]=new Blood;
	this->skill[8]=new Shield;
	this->skill[9]=new Cure;
	this->skill[10]=new Treat;
	this->skill[11]=new Pow;
}

void HeroSkillList::show(){
	for (int i=3; i<12 ;i++){
		cout<<"| "<< i + 1
			<<" "<< this->skill[i]->get_name() 
			<<" CD: "<< this->skill[i]->get_nowCd()
			<<"/" << this->skill[i]->get_cd()
			<<endl;
	}
}
void HeroSkillList::cdCount(){
	for (int i=3; i<12 ;i++){
		this->skill[i]->cdCount();
	}
}
