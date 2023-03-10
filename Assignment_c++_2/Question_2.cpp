//Check wether triangle is right angle triangle or not. take sides from user


#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int n1,n2,n3;

    printf("Enter three sides of triangle : ");
    scanf("%d%d%d",&n1,&n2,&n3);

    if((n1*n1==n2*n2+n3*n3)||(n2*n2==n1*n1+n3*n3)||(n3*n3==n2*n2+n1*n1)){
        printf("Given sides are sides of right angle triangle.");
    }
    else{
        printf("Given sides are NOT sides of right angle triangle.");
    }
    getch();
}