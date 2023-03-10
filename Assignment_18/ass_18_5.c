//transform string into lower case

#include<stdio.h>
#include<conio.h>
#include<string.h>

void lowerCase_str(char str[]){

    int i,count=0;

//convert into lower case
   for(i=0;str[i];i++){
        if(str[i]>64 && str[i]<91){ 
            str[i]=str[i]+32;
        }
    }
}
int main(){
    
    char str[50];
    printf("Enter the string :");
    fgets(str,50,stdin);

    lowerCase_str(str);

    printf("lower case string = %s",str);

    getch();
}