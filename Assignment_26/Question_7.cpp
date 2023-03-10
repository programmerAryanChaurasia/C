#include<iostream>
#include<conio.h>

using namespace std;
class Box{
    private:
        int lenght,breadth,hight;
    public:
        Box(int len, int bth, int ht ){
            lenght=len;
            breadth=bth;
            hight=ht;
        }
        void volume(){
            cout<<"valume of BOX is "<<lenght*breadth*hight<<".";
        }
};
int main(){
    Box b1(10,5,4);
    b1.volume();

    getch();
}

