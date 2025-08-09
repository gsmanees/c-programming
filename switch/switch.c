#include<stdio.h>

int main(){


    int monthNumber;
    // program to display month name according to month mnumber
    // goto label jump statement used 
    // it will exit loop when user inputs number other than 1-12
    label: printf("\nEnter month number (1-12)");
    scanf("%d",&monthNumber);

    switch (monthNumber){
        case 1:
            printf("January");
            goto label;
        case 2:
            printf("February");
            goto label;
        case 3:
            printf("March");
            goto label;
        case 4:
            printf("April");
            goto label;
        case 5:
            printf("May");
            goto label;

        case 6:
            printf("June");
            goto label;
        case 7:
            printf("July");
            goto label;
        case 8: 
            printf("August");
            goto label;
        case 9:
            printf("Septhember");
            goto label;
        case 10:
            printf("October");
           goto label;
        case 11:
            printf("November");
            goto label;
        case 12:
            printf("December");
            goto label;
        default: 
            printf("Invalid ");
        

    }


    return 0;
}