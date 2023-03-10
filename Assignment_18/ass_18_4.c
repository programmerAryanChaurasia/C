//transform string into upper case

#include<stdio.h>
#include<conio.h>
#include<string.h>

void upperCase_str(char str[]){

    int i,count=0;

//conver in upper case
    for(i=0;str[i];i++){
        if(str[i]>96 && str[i]<123){ 
            str[i]=str[i]-32;
        }
    }
}
int main(){
    
    char str[50];
    printf("Enter the string :");
    fgets(str,50,stdin);

    upperCase_str(str);

    printf("Upper case string = %s",str);

    getch();
}