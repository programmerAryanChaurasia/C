//

#include<iostream>
#include<conio.h>

using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        Complex(){}
        Complex(int val1, int val2){
            a=val1;
            b=val2;
        }
        Complex operator+(const Complex &c)
        {
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
        Complex operator-(const Complex &c)
        {
            Complex temp;
            temp.a=a-c.a;
            temp.b=b-c.b;
            return temp;
        }
        Complex operator*(const Complex &c)
        {
            Complex temp;
            temp.a=a*c.a;
            temp.b=b*c.b;
            return temp;
        }
        int operator==(const Complex &c)
        {
            if(a==c.a&&b==c.b){
                return 1;
            }
            else{
                return 0;
            }
        }
        void showData(){
            cout<<"\n a = "<<a;
            cout<<"\n b = "<<b;
        }

};
int main()
{
    int cmp;
    Complex c1(10,15),c2(15,25),c3;
    c1.showData();
    cout<<endl;
    c2.showData();

    cout<<"\n\nAddition of two complex Numbers";
    c3=c1+c2;
    c3.showData();

    cout<<"\n\nSubstraction of two complex Numbers";
    c3=c1-c2;
    c3.showData();

    cout<<"\n\nMultiplication of two complex Numbers";
    c3=c1*c2;
    c3.showData();

    cout<<"\n\nMultiplication of two complex Numbers";
    cmp=c1==c2;
    if(cmp){
        printf("\nBoth Complex Number are equal.");
    }
    else{
        printf("\nBoth complex Number are not equal.");
    }
}
