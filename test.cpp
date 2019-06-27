#include <iostream>

#include "skill.cpp"
#include "skill_list.cpp"
#include "entity.cpp"

using namespace std;

int main(){
	Hero man(2);
	Dragon dragon(2);
	man.showskill();
	man.skill(4);
	man.rest();
	man.showskill();
	man.hurt(100);
	man.recover(5000);
	dragon.hurt(500);
	dragon.recover(10000);
}