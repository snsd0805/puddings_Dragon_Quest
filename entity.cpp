#include <iostream>
using namespace std;
#include "entity.h"

void Entity::hurt(int rate){
	this->hp-=rate;
	cout<<"Hero just lost "<<rate<<" point HP"<<endl;
	cout<<"Now: "<<this->hp<<endl;
}
void Entity::recover(int rate){
	this->hp+=rate;
	cout<<"Hero just get "<<rate<<" point HP"<<endl;
	cout<<"Now: "<<this->hp<<endl;
}
void Entity::set_enemy(Entity *enemy){
	this->enemy = enemy ;
}
Hero::Hero(int choice){
	if (choice == 0){
		cout<<"[DEBUG]選擇為自訂難度"<<endl;
		cout<<"勇者最大血量: ";
		cin>>this->hp;
		cout<<endl<<"勇者基礎攻擊力: ";
		cin>>this->atk;
	}
	else if(choice == 1){
		this->hp = 4000;
		this->atk = 600;
	}
	else if(choice == 2){
		this->hp = 3500;
		this->atk = 500;
	}
	else if(choice == 3){
		this->hp = 3000;
		this->atk = 500;
	}
	else if(choice == 4){
		this->hp = 2500;
		this->atk = 400;
	}
	this->maxhp=this->hp;

	this->skilllist[0]=new Attack;
	this->skilllist[1]=new DoubleAttack;
	this->skilllist[2]=new Defense;
	this->skilllist[3]=new Freeze;
	this->skilllist[4]=new Fire;
	this->skilllist[5]=new Swipe;
	this->skilllist[6]=new Dizzy;
	this->skilllist[7]=new Blood;
	this->skilllist[8]=new Shield;
	this->skilllist[9]=new Cure;
	this->skilllist[10]=new Treat;
	this->skilllist[11]=new Pow;

	cout<<"A hero was spawn"<<endl;
	cout<<this->hp<<endl;
	cout<<this->atk<<endl;
}
bool Hero::skill(int choice){
	//cout<< this	-> skilllist . skill[choice] 
	//			-> get_name() << endl ;
	if(this	-> skilllist[choice] -> get_status() == 0){
		return 0;
	}else{
		this	-> skilllist[choice] -> use(this->enemy) ; 
		return 1;
	}
}
void Hero::showskill(){
	for (int i=3; i<12 ;i++){
		cout<<"| "<< i + 1
			<<" "<< this->skilllist[i]->get_name() 
			<<" CD: "<< this->skilllist[i]->get_nowCd()
			<<"/" << this->skilllist[i]->get_cd()
			<<endl;
	}
}
void Hero::rest(){
	for (int i=3; i<12 ;i++){
		this->skilllist[i]->cdCount();
	}
}
Dragon::Dragon(int choice){
	if (choice == 0){
		cout<<"惡龍最大血量: ";
		cin>>this->hp;
		cout<<endl<<"惡龍基礎攻擊力: ";
		cin>>this->atk;
	}
	else if(choice == 1){
		this->hp = 4000;
		this->atk = 200;
	}
	else if(choice == 2){
		this->hp = 8000;
		this->atk = 250;
	}
	else if(choice == 3){
		this->hp = 10000;
		this->atk = 300;
	}
	else if(choice == 4){
		this->hp = 12000;
		this->atk = 300;
	}
	this->maxhp=this->hp;
	cout<<"A dragon was spawn"<<endl;
	cout<<this->hp<<endl;
	cout<<this->atk<<endl;
}

