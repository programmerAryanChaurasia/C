//Sum of series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5........
#include<stdio.h>
#include<conio.h>
int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact*=i;
    return fact;
}
int series(int n){
    int sum=0,i;
    for(i=1;i<=n;i++){
        sum+=factorial(i)/i;
    }
    return sum;
}
int main(){
    series(2);
    getch();
}