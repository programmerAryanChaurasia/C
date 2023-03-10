//

#include<iostream>
#include<conio.h>
using namespace std;

//Take data through user.
class Complex
{
    private:
        int a;
        int b;
    public:
        void setData(){
            cout<<"Enter real part of complex number : ";
            cin>>a;
            cout<<"Enter Imaginary part of complex number : ";
            cin>>b;
        }
    void showData(){
        cout<<"\na = "<<a;
        cout<<"\nb = "<<b;
    }  
};
int main(){
    Complex c1;
    c1.setData();
    c1.showData();

    getch();
}

/*
// Enter Manual data .

class Complex
{
    private:
        int a;
        int b;
    public:
        void setData(int val1, int val2){
            a=val1;
            b=val2;
        }
    void showData(){
        cout<<"\na = "<<a;
        cout<<"\nb = "<<b;
    }  
};
int main(){
    Complex c1;
    c1.setData(10,20);
    c1.showData();

    getch();
}
*/