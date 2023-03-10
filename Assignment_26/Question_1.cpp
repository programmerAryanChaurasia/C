//

#include<iostream>
#include<conio.h>

using namespace std;

class Complex
{ 
    private:
        int a,b;
    public:
        void setData(int x,int y){
            a=x;
            b=y;
        }
        void showData(){
            cout<<"\na = "<<a;
            cout<<"\nb = "<<b;
;        }
        Complex add(Complex c){
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.setData(10,20);
    c2.setData(10,30);
    cout<<"\n";
    c1.showData();
    cout<<"\n";
    c2.showData();
    c3=c1.add(c2);
    cout<<"\n";
    c3.showData();

    getch();

}