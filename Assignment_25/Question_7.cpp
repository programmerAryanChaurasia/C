//

#include<iostream>
#include<conio.h>
using namespace std;

class Greatest
{
    public:
        void find_greatest(int val1, int val2, int val3){
            if(val1>val2&&val1>val3){
                cout<<"Greatest is : "<<val1;
            }
            if(val2>val1&&val2>val3){
                cout<<"Greatest is : "<<val2;
            }
            if(val3>val2&&val3>val1){
                cout<<"Greatest is : "<<val3;
            }
        }
};

int main()
{
    Greatest s1;
    s1.find_greatest(50,40,30);


    getch();
}