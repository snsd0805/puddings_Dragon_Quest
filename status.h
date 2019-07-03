#include<iostream>
using namespace std;

class Statuslist;

class Status
{
    public:
        virtual void use()=0;
        Status* get_next();
        void set_next(Status *next_node);
        string get_data();
    protected:
        string data;    //name
        int cd;
        Status *next=NULL;

    friend class Statuslist;
};
class Freeze_Status : public Status
{
    public:
        Freeze_Status();
        virtual void use();
    private:
};
class Fire_Status : public Status
{
    public:
        Fire_Status();
        virtual void use();
    private:
};
class Dizzy_Status : public Status
{
    public:
        Dizzy_Status();
        virtual void use();
    private:

};
class Blood_Status : public Status
{
    public:
        Blood_Status();
        virtual void use();
    private:
};
class Shield_Status : public Status
{
    public:
        Shield_Status();
        virtual void use();
    private:
};
class Treat_Status : public Status
{
    public:
        Treat_Status();
        virtual void use();
    private:
};



class Statuslist
{
    public:
        Statuslist(){
            this->first_node=NULL;
        }

        void print();
        void put_back(Status *x);
        void delete_node(string x);

    private:
        Status *first_node;
};