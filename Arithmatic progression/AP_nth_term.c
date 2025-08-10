#include<stdio.h>



// Arithmatic Progression 
// nth term = a+ (n-1)d


int main (){

    int a;
    int n;
    int d;
    int k;

    printf("\nArithmatic Progression - Nth term Finer\n");
    printf("Enter 1st term: ");
    scanf("%d", &a);

    printf("Enter common difference: ");
    scanf("%d", &d);

    printf("Which term you need to find (n): ");
    scanf("%d", &n);

    // finding n'th term 
    k = a+(n-1)*d;

    printf("Value of %d'th term: %d", n, k);

    return 0;

}