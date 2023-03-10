//Recursive function to calculate HCF of two number...
#include<stdio.h>
#include<conio.h>
int hcf(int a, int b){
    if(b==0)
        return a;
    hcf(b,a%b);

}
int main()
{
    int a=80,b=15;
    printf("Hcf = %d",hcf(a,b));
    getch();
}