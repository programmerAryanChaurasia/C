#include<stdio.h>
#include<conio.h>
int main()
{
    int var;
    printf("Enter volue 1 or 2 or 3 :");
    scanf("%d",&var);
    switch(var==3)
    {
        case 1:
            printf("Good");
            break;
        case 0:
            switch(var==2)
            {
                case 1:
                printf("Better");
                break;
                case 0:
                    switch(var==1)
                    {
                        case 1:
                            printf("Best");
                            break;
                        case 0:
                            printf("Invalid");
                            break;
                    }
                    break;
            }
            break;
        
    }
}