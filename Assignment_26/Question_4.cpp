//

#include<iostream>
using namespace std;
 class counter{
 private :
    int count;
 public:
    counter(){
    count=0;}
    void increase(){
    count++;
    }
    void show_counter(){
    cout<<count ;}
 };
int main(){
    counter c;
    cout<<"before calling counter increase function : " <<" count = ";
    c.show_counter();
    cout<<"\nafter calling counter increase function : "<<"count  = ";
    c.increase();
    c.show_counter();
return 0;
}
