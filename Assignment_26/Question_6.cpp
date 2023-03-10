#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Student
{
    private:
        int id,rollNumber;
        char name[20];
        float marks;
    public:
        Student(int ids,int roll,char naam[20],float mks){
            id=ids;
            rollNumber=roll;
            strcpy(name,naam);
            marks=mks;
        }
        void showDetail(){
            cout<<"\nStudent id = "<<id;
            cout<<"\nStudent Roll Number = "<<rollNumber;
            cout<<"\nStudent Name = "<<name;
            cout<<"\nStudent Marks  "<<marks;
        }
};
int main(){ 
    Student s1(7192,3025,"Aryan chaurasia",617);
    s1.showDetail();

    getch(); 
}