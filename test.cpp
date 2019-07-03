#include <iostream>

//#include "skill_list.h"

//#include "skill.h"

#include "entity.h"

using namespace std;

int main(){
	Statuslist status;
	Status *a=new Freeze_Status;
	cout<<a->get_data();
	status.put_back(a);
	Status *B=new Fire_Status;
	status.put_back(B);
	Status *c=new Dizzy_Status;
	status.put_back(c);
	/*Hero man(2);
	Dragon dragon(2);

	man.set_enemy(&dragon,&man);
	for(int i=0;i<10;i++){
		man.skill(5);
		man.rest();
		man.showskill();
	}*/
	/*int *a[5];
	a[2]=new int;
	*a[2]=10;
	for(int i=0;i<5;i++){
		if(a[i]==NULL)
			cout<<"NULL"<<endl;
		else
			cout<<*a[i]<<endl;
	}*/
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