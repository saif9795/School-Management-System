#include<iostream>
#include<string>
#include<fstream>
#include <conio.h>
using namespace std;

class Basic_info{

    private:

        string name;
        string sex;
        int age;
        string religion;
        string nationality;
        string address;
        string email_id;
        int phone_number;
        char blood_group;

    public:

        void get_info(){

        cout<<"PLEASE ENTER THE NAME: ";
        cin>>name;


        cout<<"PLEASE ENTER SEX: ";
        cin>>sex;


        cout<<"PLEASE ENTER AGE: ";
        cin>>age;


        cout<<"PLEASE ENTER THE RELIGION: ";
        cin>>religion;


        cout<<"PLEASE ENTER NATIONALITY: ";
        cin>>nationality;


        cout<<"PLEASE ENTER ADDRESS: ";
        cin>>address;


        cout<<"PLEASE ENTER EMAIL ADDRESS: ";
        cin>>email_id;


        cout<<"PLEASE ENTER PHONE NUMBER: ";
        cin>>phone_number;


        cout<<"PLEASE ENTER BLOOD GROUP: ";
        cin>>blood_group;

        }

        void show_info(){

        cout<<"Name: "<<name<<endl;
        cout<<endl;

        cout<<"SEX: "<<sex<<endl;
        cout<<endl;

        cout<<"AGE: "<<age<<endl;
        cout<<endl;

        cout<<"RELIGION: "<<religion<<endl;
        cout<<endl;

        cout<<"NATIONALITY: "<<nationality<<endl;
        cout<<endl;

        cout<<"EMAIL ID "<<email_id<<endl;
        cout<<endl;

        cout<<"PHONE NUMBER: "<<phone_number<<endl;
        cout<<endl;

        cout<<"BLOOD GROUP: "<<blood_group<<endl;
        cout<<endl;

        }


};

class Student: public Basic_info{

    protected:
        int classnumber;
        int roll;
        int section;
        string dept;
        int id;

    public:

       void get_info(){
           Basic_info::get_info();

        cout<<"PLEASE ENTER CLASS: "<<endl;
        cin>>classnumber;
        cout<<endl;

        cout<<"PLEASE ENTER ROLL NUMBER: "<<endl;
        cin>>roll;
        cout<<endl;

        cout<<"PLEASE ENTER SECTION: "<<endl;
        cin>>section;
        cout<<endl;

        cout<<"PLEASE ENTER DEPARTMENT: "<<endl;
        cin>>dept;
        cout<<endl;

        cout<<"PLEASE ENTER ID NUMBER: "<<endl;
        cin>>id;
        cout<<endl;
       }

       show_info(){
            Basic_info::show_info();

        cout<<"CLASS: "<<classnumber<<endl;
        cout<<endl;

        cout<<"ROLL: "<<roll<<endl;
        cout<<endl;

        cout<<"SECTION: "<<section<<endl;
        cout<<endl;

        cout<<"DEPARTMENT: "<<dept<<endl;
        cout<<endl;

        cout<<"ID: "<<id<<endl;
        cout<<endl;

        }
};

class Teacher: public Basic_info{
    private:
        int salary;
        string designation;
        int publication;

    public:

        void get_info(){
            Basic_info::get_info();

        cout<<"PLEASE ENTER SALARY: "<<endl;
        cin>>salary;
        cout<<endl;

        cout<<"PLEASE ENTER DESIGNATION: "<<endl;
        cin>>designation;
        cout<<endl;

        cout<<"PLEASE ENTER NUMBER OF PUBLICATION: "<<endl;
        cin>>publication;
        cout<<endl;
        }


       show_info(){
            Basic_info::show_info();

        cout<<"SALARY: "<<salary<<endl;
        cout<<endl;

        cout<<"DESIGNATION: "<<designation<<endl;
        cout<<endl;

        cout<<"NUMBER OF PUBLICATION: "<<publication<<endl;
        cout<<endl;

       }
};

class Employee: public Basic_info{
    private:

        string job;
        string designation;
        int salary;

    public:


        void get_info(){
            Basic_info::get_info();

        cout<<"PLEASE ENTER JOB: "<<endl;
        cin>>job;
        cout<<endl;

        cout<<"PLEASE ENTER DESIGNATION: "<<endl;
        cin>>designation;
        cout<<endl;

        cout<<"PLEASE ENTER SALARY: "<<endl;
        cin>>salary;
        cout<<endl;
        }


        show_info(){
            Basic_info::show_info();

        cout<<"JOB: "<<job<<endl;
        cout<<endl;

        cout<<"DESIGNATION: "<<designation<<endl;
        cout<<endl;

        cout<<"SALARY: "<<salary<<endl;
        cout<<endl;
        }
};

class ClassRoom_Info{
    private:

        int totalroom;
        int room_per_class;

    public:

        void get_info(){

        cout<<"PLEASE ENTER TOTAL ROOM NUMBER: "<<endl;
        cin>>totalroom;
        cout<<endl;

        cout<<"PLEASE ENTER ROOM PER CLASS: "<<endl;
        cin>>room_per_class;
        cout<<endl;
        }

        void show_info(){

        cout<<"TOTAL ROOM: "<<totalroom<<endl;
        cout<<endl;

        cout<<"ROOM PER CLASS: "<<room_per_class<<endl;
        cout<<endl;

        }
};


int main(){

    cout<<endl;
    cout<<endl;
    cout<<endl;


    Student s1;
    Teacher t1;
    Employee e1;
    ClassRoom_Info ci1;

    int x,y,z,a,b;



    cout<<"**************WELCOME TO THE SCHOOL MANAGEMENT SYSTEM**************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;


    cout<<"[1] STUDENT \n"<<endl;
    cout<<"[2] TEACHER \n"<<endl;
    cout<<"[3] EMPLOYEE \n"<<endl;
    cout<<"[4] CLASS ROOM INFORMATION \n"<<endl;
    cout<<"[5] ADMIN \n"<<endl;


    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"PLEASE ENTER YOUR CHOICE(1-5): ";
    cin>>x;
    cout<<endl;
    cout<<endl;



    if(x==1){
            cout<<"[1] ENTER NEW INFORMATION \n"<<endl;
            cout<<"[2] FIND INFORMATION \n"<<endl;
        cin>>y;
        if(y==1){
            s1.get_info();

        }

        else if(y==2){
            s1.show_info();


        }

        else{
            cout<<"ENTER FROM OPTION 1 & 2"<<endl;
        }
    }

    else if(x==2){
            cout<<"[1] ENTER NEW INFORMATION \n"<<endl;
            cout<<"[2] FIND INFORMATION \n"<<endl;

        cin>>y;
        if(y==1){

            t1.get_info();

        }

        else if(y==2){

            t1.show_info();

        }

        else{
                cout<<"ENTER FROM OPTION 1 & 2"<<endl;
        }

    }

    else if(x==3){
            cout<<"[1] ENTER NEW INFORMATION \n"<<endl;
            cout<<"[2] FIND INFORMATION \n"<<endl;

            cin>>z;
        if(z==1){

            e1.get_info();

        }

        else if(z==2){

            e1.show_info();

        }

        else{
                cout<<"ENTER FROM OPTION 1 & 2"<<endl;
        }


    }

    else if(x==4){
            cout<<"[1] ENTER NEW INFORMATION \n"<<endl;
            cout<<"[2] FIND INFORMATION \n"<<endl;

            cin>>a;
        if(a==1){

            ci1.get_info();

        }

        else if(a==2){

            ci1.show_info();

        }

        else{
                cout<<"ENTER FROM OPTION 1 & 2"<<endl;
        }

    }

    else if(x==5){
            cout<<"PLEASE ENTER PASSWORD /n"<<endl;


    }

    else{
        cout<<"PLEASE CHOOSE FROM OPTION 1-5"<<endl;
        cout<<endl;
    }









    return 0;













}



