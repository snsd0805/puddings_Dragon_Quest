#include <iostream>

//#include "skill_list.h"

//#include "skill.h"

#include "entity.h"

using namespace std;

int main(){
	Hero man(2);
	Dragon dragon(2);

	man.set_enemy(&dragon,&man);
	man.skill(0);
	man.rest();
	man.showskill();
	/*int n=0;
	while(n<13){
		if(man.skill(n)){
			cout<<"OK"<<endl;
		}else{
			cout<<"Fail"<<endl;
		}
		man.rest();
		man.showskill();
		n++;
	}*/

}