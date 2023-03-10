#include<stdio.h>
#include<conio.h>
int main()
{
    int bill,amount;

    printf("\n\nEnter our electric bill in Units : ");
    scanf("%d",&bill);

    switch(bill<=50)
    {
        case 1:
            amount=bill*0.50;
            printf("Bill Amount = %d",amount);
            break;
        case 0:
            switch(bill<=150)
            {
                case 1:
                    amount=50*0.5+(bill-50)*0.75;
                    printf("Bill Amount = %d",amount);
                    break;
                case 0:
                    switch(bill<=250)
                    {
                        case 1:
                            amount=50*0.50+100*0.75+(bill-150)*1.2;
                            printf("Bill Amount = %d",amount);
                            break;
                        case 0:
                            switch(bill>250)
                            {
                                case 1:
                                    amount=50*0.50+100*0.75+100*1.2+(bill-250)*1.50;
                                    printf(" Bill Amount = %d",amount);
                                    break;
                            }
                            break;
                    }
                    break;
            }
            break;
    }

    getch();
}

