#include "status.h"

Freeze_Status::Freeze_Status(){
	this->data="Freeze_Status";
	this->cd=3;
}
Fire_Status::Fire_Status(){
	this->data="Fire_Status";
	this->cd=3;
}
Dizzy_Status::Dizzy_Status(){
	this->data="Dizzy_Status";
	this->cd=3;
}
void Freeze_Status::use(){

}
void Fire_Status::use(){

}
void Dizzy_Status::use(){

}
void Blood_Status::use(){

}
void Shield_Status::use(){

}
void Treat_Status::use(){
	
}




Status* Status::get_next(){
	return this->next;
}

void Status::set_next(Status *next_node){
    this->next=next_node;    
}

string Status::get_data(){
    return this->data;
}




void Statuslist::print(){
    if(this->first_node==NULL){
        cout<<"This linkedlist doesn't have any data."<<endl;
    }else{
        Status *present=this->first_node;
        cout<<endl<<"Now: ";
        while(present->get_next()!=NULL){
            cout<<present->get_data()<<" ";
            present=present->get_next();
        }
        cout<<present->get_data()<<endl<<endl;
    }
}

void Statuslist::put_back(Status *x){
    Status *temp=x;
    if(this->first_node==NULL){
        this->first_node=x;
    }else{
        Status *present=this->first_node;
        while(present->get_next()!=NULL){
            present=present->get_next();
        }
        present->set_next(temp);
        //cout<<"The latest node has been set "<<present->get_next()->get_data()<<endl;
        this->print();
    }
}

void Statuslist::delete_node(string x){
    if(this->first_node==NULL){
        cout<<"This linkedlist doesn't have any data."<<endl;
    }else{
        Status *present=this->first_node;
        Status *previous=NULL;
        int del_status=0;
        while(present->get_next()!=NULL){
            if(present->get_data()==x){
                if(previous!=NULL){
                    previous->set_next(present->get_next());
                    del_status++;
                }else{
                    this->first_node=present->get_next();
                    del_status++;
                }
            }
            previous=present;
            present=present->get_next();
        }
        if(present->get_data()==x){
            if(previous!=NULL){
                previous->set_next(present->get_next());
                del_status++;
            }else{
                this->first_node=present->get_next();
                del_status++;
            }
        }
        if(del_status==0)
            cout<<"No data fits this one."<<endl;
        else
            cout<<"Deleted "<<del_status<<" nodes"<<endl;
        this->print();
    }
}