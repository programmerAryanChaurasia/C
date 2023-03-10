//

#include<iostream>
#include<conio.h>
using namespace std;

class LargectNumber
{
    private:
        int a,b,c;
    public:
        void setValue(int val1,int val2,int val3){
            a=val1;
            b=val2;
            c=val3;
        }
        int findLarge(){
            if(a>b&&a>c){
                return a;
                }
            if(b>a&&b>c){
                return b;
                }

            if(c>a&&c>b){
                return c;
                }
        }
};

int main()
{
    LargectNumber l1;
    l1.setValue(40,20,55);
    int larg = l1.findLarge();
    cout<<"Largest Number is = "<<larg;

    getch();
}
