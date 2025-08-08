#include<stdio.h>

int main(){


    // variable declarations 
    int items=0;
    float cost=0;
    float total=0;
    
    //scanning number of items and cost per item
    printf("\nEnter number of items: ");
    scanf("%d", &items);
    printf("Enter cost per item: ");
    scanf("%f", &cost);

    // calculating total amount 
    total=items*cost;


    // printing number of items, cost per item and total amount 
    printf("\nItems = %d", items);
    printf("\nCost per item = %.2f", cost);
    printf("\n\nTotoal amount: %.2f ₹", total);


    return 0;
}