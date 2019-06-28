#include "skill.h"

int Skill::get_nowCd(){return this->nowCd;}
int Skill::get_cd(){return this->cd;}
string Skill::get_name(){return this->name;}
int Skill::get_status(){return this->status;}
void Skill::reset(){cout<<"GG"<<endl;} // this line is unused,it couldn't run as i think
void Skill::cdCount(){
	if(this->status==0){
		if(this->nowCd < this->cd){
			this->nowCd++;
		}else{
			//this->reset();
			this->nowCd = 0;
			this->status = 1;
		}
	}
}
void Skill::use(){		//for hero use , may be a abastract func.
	this-> status = 0 ;
}

Attack::Attack(){this->reset();}
DoubleAttack::DoubleAttack(){this->reset();}
Defense::Defense(){this->reset();}
Freeze::Freeze(){this->reset();}
Fire::Fire(){this->reset();}
Swipe::Swipe(){this->reset();}
Dizzy::Dizzy(){this->reset();}
Blood::Blood(){this->reset();}
Shield::Shield(){this->reset();}
Cure::Cure(){this->reset();}
Treat::Treat(){this->reset();}
Pow::Pow(){this->reset();}



void Attack::reset(){
	this->name = "attack";
	this->cd = 0;
	this->nowCd = 0;
	this->status = 1;
}
void DoubleAttack::reset(){
	this->name = "DoubleAttack";
	this->cd = 0;
	this->nowCd = 0;
	this->status = 1;
}
void Defense::reset(){
	this->name = "defense";
	this->cd = 0;
	this->nowCd = 0;
	this->status = 1;
}
void Freeze::reset(){
	this->name = "freeze";
	this->cd = 18;
	this->nowCd = 0;
	this->status = 1;
}
void Fire::reset(){
	this->name = "fire";
	this->cd = 9;
	this->nowCd = 0;
	this->status = 1;
}
void Swipe::reset(){
	this->name = "swipe";
	this->cd = 5;
	this->nowCd = 0;
	this->status = 1;
}
void Dizzy::reset(){
	this->name = "dizzy";
	this->cd = 13;
	this->nowCd = 0;
	this->status = 1;
}
void Blood::reset(){
	this->name = "blood";
	this->cd = 27;
	this->nowCd = 0;
	this->status = 1;
}
void Shield::reset(){
	this->name = "shield";
	this->cd = 16;
	this->nowCd = 0;
	this->status = 1;
}
void Cure::reset(){
	this->name = "cure";
	this->cd = 20;
	this->nowCd = 0;
	this->status = 1;
}
void Treat::reset(){
	this->name = "treat";
	this->cd = 14;
	this->nowCd = 0;
	this->status = 1;
}
void Pow::reset(){
	this->name = "pow";
	this->cd = 10;
	this->nowCd = 0;
	this->status = 1;
}


