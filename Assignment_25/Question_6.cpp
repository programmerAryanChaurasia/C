#include<iostream>
#include<conio.h>
using namespace std;

class Square
{
    public:
        void find_square(int val){
            cout<<"Square of "<<val<<" = "<<val*val;
        }
};

int main()
{
    Square s1;
    s1.find_square(10);


    getch();
}
