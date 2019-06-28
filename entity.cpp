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
	cout<<"A hero was spawn"<<endl;
	cout<<this->hp<<endl;
	cout<<this->atk<<endl;
}
bool Hero::skill(int choice){
	//cout<< this	-> skilllist . skill[choice] 
	//			-> get_name() << endl ;
	if(this	-> skilllist . skill[choice] -> get_status() == 0){
		return 0;
	}else{
		this	-> skilllist . skill[choice] -> use() ;
		return 1;
	}
}
void Hero::showskill(){
	this -> skilllist . show();
}
void Hero::rest(){
	this -> skilllist . cdCount();
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

