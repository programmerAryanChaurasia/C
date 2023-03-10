#include<iostream>
#include<conio.h>

using namespace std;

class Bank
{
    private:
        int principle,rate,year,si,amount;
    public:
        Bank(){
            principle=0;
            rate=0;
            year=0;
        }
        void readValue(){
            int p,r,y;
            cout<<"Enter principle value : ";
            cin>>p;
            cout<<"Enter rate of interest : ";
            cin>>r;
            cout<<"Enter time in year : ";
            cin>>y;
            principle=p;
            rate=r;
            year=y;
        }
        void simpleInterest(){
            si=(principle*rate*year)/100;
            amount=principle+si;
            cout<<"\nSimple Interest = "<<(si);
            cout<<"\nTotal Amount = "<<amount;
        }       
};
int main(){
    Bank b1;
    b1.readValue();
    b1.simpleInterest();

}