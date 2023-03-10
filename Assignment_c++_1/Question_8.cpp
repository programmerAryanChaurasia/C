//Swap two int variable.



#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    cout<<"Before swaping value a = "<<a<<" and b = "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
   
    cout<<"After swaping value a = "<<a<<" and b = "<<b;
    getch();
}