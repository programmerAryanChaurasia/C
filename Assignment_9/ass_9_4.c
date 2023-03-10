#include<stdio.h>
#include<conio.h>
int main(){

    int a,b,c;

    printf("\n\nEnter length of three sides of triangle :\n");
    scanf("%d%d%d",&a,&b,&c);

    switch(a==b&&b==c&&c==a)
    {
        case 1:
            printf("It is Equilateral Triangle.");
            break;
        case 0:
            switch(a==b||a==c||b==c)
            {
                case 1:
                    printf("It is side of isoseles Triangle.");
                    break;
                case 0:
                    switch(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
                    {
                        case 1:
                            printf("It is side of right angle triangle");
                            break;
                        case 0:
                            printf("It is nor side of equilateral nor isoeleces nor righ angle triangle");
                            break;
                    }
                    break;
            }
            break;
    }
    getch();
}