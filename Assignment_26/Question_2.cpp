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
        void setTime(){
            cout<<endl;
            cout<<"Enter time hour : ";
            cin>>hr;
            cout<<"Enter time minute : ";
            cin>>min;
            cout<<"Enter Time in second : ";
            cin>>sec;
        }
        void showTime(){
            cout<<"Time is => "<<hr<<" hr "<<min<<" min "<<sec<<" sec."; 
        }
        Time add(Time t){
            Time temp;
            temp.hr=hr+t.hr;
            temp.min=min+t.min;
            temp.sec=sec+t.sec;
            return temp;
        }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime();
    t1.showTime();
    t2.setTime();
    t2.showTime();
    cout<<endl;
    t3=t1.add(t2);
    t3.showTime();     

    getch();
}