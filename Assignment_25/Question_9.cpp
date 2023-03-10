//

#include<iostream>
#include<conio.h>
using namespace std;

class Circle 
{
    public:
        void find_area(int r){
            cout<<"Area of Circle is "<<3.14*r*r;
        }
};
int main()
{
    Circle c1;
    c1.find_area(10);


    getch();
}
