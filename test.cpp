#include <iostream>

#include "skill.cpp"
#include "skill_list.cpp"
#include "entity.cpp"

using namespace std;

int main(){
	Hero man(2);
	int n=7;
	while(n--){
		if(man.skill(5)){
			cout<<"OK"<<endl;
		}else{
			cout<<"Fail"<<endl;
		}
		man.rest();
		man.showskill();
	}

}