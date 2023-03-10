//

#include<iostream>
#include<conio.h>
using namespace std;

class Area 
{
    public:
        void findAreaOfCircle(int r){
            cout<<"\nArea of Circle is "<<3.14*r*r;
        }
        void findAreaOfSquare(int a){
            cout<<"\nArea of Square is "<<a*a;
        }
        void findAreaOfRectangle(int l,int b){
            cout<<"\nArea of Rectangle is "<<l*b;
        }
};
int main()
{
    Area a1,a3;
    a1.findAreaOfCircle(10);
    a1.findAreaOfRectangle(10,5);
    a3.findAreaOfSquare(5);


    getch();
}
