//find the repeated character in a given string.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void sort(char str[]){

    int i,j;
    char temp;

    for(i=1;i<(strlen(str));i++){
        for(j=0;j<(strlen(str)-1);j++){
            if(str[j]>str[j+1]){
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
}
void repetedCharacter_str(char str[]){

    int i,j,len;
    int count=0;

    len=strlen(str);
    printf("Repeated characters are :\t");
    
    for(i=0;i<len;i++){
       if(str[i]==str[i+1]){
        if(count==0){
            printf("%c\t",str[i]);
            count++;
        }
        continue;
       }
       else{
        count=0;
       }
    }
}
int main(){
    
    char str[50];
    printf("Enter the string :");
    fgets(str,50,stdin);
    sort(str);
    repetedCharacter_str(str);

    getch();
}