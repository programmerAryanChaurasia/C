//write a function to compare the two string

#include<stdio.h>
#include<conio.h>
#include<string.h>

int compare_str(char str1[], char str2[]){

    int i,len1,len2;

    len1=strlen(str1);
    len2=strlen(str2);

    if(len1!=len2){
        return 0;
    }

    for(i=0;i<len1;i++){
      if(str1[i]!=str2[i]){
        return 0;
      }
    }
    return 1;
}
int main(){
    
    char str1[50];
    char str2[50];

    int comp;

    printf("Enter first string :");
    fgets(str1,50,stdin);

    printf("Enter Second string :");
    fgets(str2,50,stdin);

    comp=compare_str(str1,str2);

   if(comp){
    printf("Both string are same.");
   }
   else{
    printf("Both string are different.");
   }

    getch();
}