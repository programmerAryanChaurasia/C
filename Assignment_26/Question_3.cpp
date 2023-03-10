//
#include<iostream>
#include<conio.h>
using namespace std;

class Cube
{
    private:
        int a;
    public:
        Cube(int edge){
            a=edge;
        }
        void volumeOfCube(){
            cout<<"Valume of Cube is : "<<a*a*a;
        }
};
int main()
{
    Cube c1(10);
    c1.volumeOfCube();

    getch();
}