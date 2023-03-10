//

#include<iostream>
#include<conio.h>
using namespace std;

class Time
{
    private:
        int hr;
        int min;
        int sec;
    public:
        void setValue(){
            cout<<"Enter time hour : ";
            cin>>hr;
            cout<<"Enter time minute : ";
            cin>>min;
            cout<<"Enter Time in second : ";
            cin>>sec;
        }
        void showData(){
            cout<<"Time is => "<<hr<<" hr "<<min<<" min "<<sec<<" sec."; 
        }
};
int main()
{
    Time t1;
    t1.setValue();
    t1.showData();  

    getch();
}
