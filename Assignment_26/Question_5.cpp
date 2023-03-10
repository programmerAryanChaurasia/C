//

#include<iostream>
#include<stdlib.h>
using namespace std;
class Date{
   private :
       int day,month,year;
   public:
    Date(int d,int m,int y){
    day=d;
    month=m;
    year=y;
    }
void show_Date(){
cout<<day<<" / "<<month<<" / "<<year;
}

};
int main(){
    Date d1(10,3,2002);
    d1.show_Date();

return 0;
}