//


#include<iostream>
#include<conio.h>
using namespace std;

class Rectangle 
{
    public:
        void find_area(int l, int b){
            cout<<"Area of Rectangle is "<<l*b;
        }
};

int main()
{
    Rectangle s1;
    s1.find_area(10,20);


    getch();
}
