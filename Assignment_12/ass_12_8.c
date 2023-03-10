//Print binary of given dicimal number
#include<stdio.h>
#include<conio.h>
int find_recursion(int decimal){
    if(decimal==0)
        return 0;
    else
        return(decimal%2+10*(find_recursion(decimal/2)));
}
int main(){
    int decimal = 10;
    printf("%d",find_recursion(decimal));
    getch();
}



/* 
Method 1. Using Loop...

int main(){
    
    int i=1,n=10,binary=0,rem;
    while(n>0){
        rem=n%2;
        binary=binary+rem*i;
        n=n/2;
        i=i*10;
    }
    printf("%d",binary);
    
    getch();
}

Method 2. using Array...

int main(){
    int arr[5]
}
*/