//

#include<iostream>
#include<conio.h>

using namespace std;

class StaticCount
{
    private:
        static int a;
    public:
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
        void functionCounter(){
            a++;
            cout<<"\n\nFunction Call Number : "<<a;
        }
};
int StaticCount::a=0;
int main()
{
    StaticCount s1;
    s1.functionCounter();
    s1.functionCounter();
    s1.functionCounter();
    
    getch();
}