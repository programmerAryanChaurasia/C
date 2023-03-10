//

#include<iostream>
#include<conio.h>

using namespace std;

class Bill
{
    private:
    float units;
    public:
        void get(){
            cout<<"Enter Bill in units :";
            cin>>units;
        }
        float calculateBill(){
            if(units<=100){
                return (100*1.2);
            }
            else if(units<=200){
                return (100*1.2+(units-100)*2);
            }
            else
                return (100*1.2+(100)*2+(units-200)*3);
        }
};
int main()
{
    float amount;
    Bill b1;
    b1.get();
    amount = b1.calculateBill();
    cout<<"Total Bill Amount = "<<amount;

    getch();
}