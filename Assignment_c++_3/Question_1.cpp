//Print first n natural number.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num;

    printf("Enter nmber : ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        printf("%d\t",i);
    }
    getch();
}