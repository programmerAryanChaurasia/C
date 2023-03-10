//Search a string in list of string...

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){

    int i;
    char str1[5][20];
    char str2[20];

    for(i=0;i<5;i++){
        fgets(str1[i],20,stdin);
    }
    printf("Enter single string :");
        fgets(str2,20,stdin);

    for(i=1;i<5;i++){
        if(strcmp(str1[i],str2)==0){
            printf("Found");
            break;
        }
    }
    if(i==5){
        printf("Not found.");
    }

getch();
}