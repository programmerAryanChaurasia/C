//Calculate Simple interest.

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    float p,r,t;
    cout<<"Calculate simple interest : Enter princile value rate and time: ";
    cin>>p>>r>>t;
    cout<<"Interest = : "<<(p*r*t)/100;
    getch();
}