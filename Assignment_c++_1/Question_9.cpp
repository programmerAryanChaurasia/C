//Write a program to take character as input and Display its ASCII code.

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    cout<<"ASCII code of character is : "<<int(ch);
    getch();
}
