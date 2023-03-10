//

#include<iostream>
#include<conio.h>
using namespace std;

class ReverseNumber
{
    private:
        int num;
    public:
        void setValue(int val){
            num=val;
        }
        int reverse(){
            int i=1,rev=0,rem;
            while(num>0){
                rem=num%10;
                rev=rev*i+rem;
                num=num/10;
                i=10;
            }
            cout<<"Reverse Number is "<<rev;
        }
};

int main()
{
    ReverseNumber r1;
    r1.setValue(123456789);
    r1.reverse();

    getch();
}
