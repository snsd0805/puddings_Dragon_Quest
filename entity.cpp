#include <iostream>
#include <random>
#include <chrono>
#include <thread>
#include <iomanip>

/* load custom headers */
#include "render.h"
#include "battle_check.h"
#include "misc.h"
 
using namespace std;

#include "skill_list.cpp"
#include "entity.h"

void Entity::hurt(int rate){
	this->hp-=rate;
	cout<<"Now: "<<this->hp;
}


Hero::Hero(int choice){
	if (choice == 0){
		cout<<yellow_text("[DEBUG]選擇為自訂難度")<<endl;
		cout<<white_text("勇者最大血量: ");
		cin>>this->hp;
		cout<<endl<<white_text("勇者基礎攻擊力: ");
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
}


Dragon::Dragon(int choice){
	if (choice == 0){
		cout<<white_text("惡龍最大血量: ");
		cin>>this->hp;
		cout<<endl<<white_text("惡龍基礎攻擊力: ");
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
}

