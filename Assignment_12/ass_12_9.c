//Print octal of given decimal number
#include<stdio.h>
#include<conio.h>
int find_recursion(int decimal){
    if(decimal==0)
        return 0;
    else
        return(decimal%8+10*(find_recursion(decimal/8)));
}
int main(){
    int decimal = 10;
    printf("%d",find_recursion(decimal));
    getch();
}