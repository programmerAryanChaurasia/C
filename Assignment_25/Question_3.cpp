//
#include<iostream>
#include<conio.h>
using namespace std;

class Factorial
{
    private:
        int num;
    public:
        void takeData(){
            cout<<"Enter data to calculate factorial : ";
            cin>>num;
        }
        int calculateFactorial(){
            int i,fact=1;
            for(i=1;i<=num;i++){
                fact*=i;
            }
        //cout<<"Factorial of "<<num<<" is = "<<fact;
        return fact;
        } 
};
int main()
{
    Factorial f1;
    f1.takeData();
    int fact = f1.calculateFactorial();

    cout<<"Factorial = "<<fact<<".";

    getch();
}

