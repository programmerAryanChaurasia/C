//Find number of Vowel store each of five string store in two dimentional array.

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){

    int i,j,count;
    char str[5][20];

    //take input through user.
    for(i=0;i<5;i++){
        fgets(str[i],20,stdin);
    }
    for(i=0;i<5;i++){
        count=0;
        for(j=0;str[i][j];j++){
            if((str[i][j]=='a')||(str[i][j]=='e')||(str[i][j]=='i')||(str[i][j]=='o')||(str[i][j]=='u')||(str[i][j]=='A')||(str[i][j]=='E')||(str[i][j]=='I')||(str[i][j]=='O')||(str[i][j]=='U')){
                count++;
            }
        }
       printf("Number of vowels in string %d. is %d\n",i+1,count);
    }
    getch();
}