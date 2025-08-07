#include<stdio.h>

// this program is for understanding the concept of %d, %f
//%d --> integer 
//%f --> float


int main(){

    // variable declaration
    int i=0;
    char c;
    float f;

    // receiving inputs from user 
    printf("\n\n\nEnter an integer: ");
    scanf("%d", &i);
   
    printf("\nEnter a float number: ");
    scanf("%f", &f);
    printf("\n\n\n\n");

    // printing 
    printf("Printing results:\n---------\n");
    printf("You entered integer: %d\n", i);
    printf("You entered float number: %f", f);
    printf("\n----------------\n");

return 0;
}