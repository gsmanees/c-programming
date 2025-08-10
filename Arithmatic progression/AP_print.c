#include<stdio.h>

int main(){

    int a=0, d=0, n=0, i=0;

    printf("Enter First term: ");
    scanf("%d", &a);

    printf("Enter common difference: ");
    scanf("%d", &d);

    printf("Enter upto which term the AP to be generated? (n): ");
    scanf("%d", &n);

    //Arithmatic Progression generation
   for (i=0; i<n; i++){

       printf("%d ", a);
          a+=d;

    }
       


    return 0;
}