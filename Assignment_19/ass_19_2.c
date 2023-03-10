//Sort 10 city name store in Array...
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){

    int i,j,count,x;
    char str[10][20];
    char temp[20];

    printf("Enter 10 string.\n");
    //take input through user.
    for(i=0;i<10;i++){
        fgets(str[i],20,stdin);
    }
    for(i=0;i<10-1;i++)
    {
        for(j=i+1;j<10;j++){
           x=strcmp(str[i],str[j]);
           if(x>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
           }
        }

    }
    printf("\nString in dictionary ordre.\n");
    for(i=0;i<10;i++){
        printf("%s",str[i]);
    }
    getch();
}