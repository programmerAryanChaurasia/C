//

#include<stdio.h>
#include<string.h>
int main(){
     int i,flag=0;
     char a[3][2][20]=
     {
         {
             "aryan","400"
         },
         {
          "vikash","700"
         },
         {
             "aryan","201"
         }

     };
     char username[]="aryan";
     char password[]="400";


     for(i=0;i<3;i++){
        if(strcmp(username,a[i][0])==0  && strcmp(password,a[i][1])==0)
        {

            printf("login successful!");
            flag=1;
        }
     }
     if(flag==0)
        printf("login unsuccessful");


return 0;
}