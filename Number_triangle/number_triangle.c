#include<stdio.h>
int main(){

    int i=0;
    int j=0;
    int n=0;
    
    printf("Enter number of rows upto which triangle is printed: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        for (j=1; j<=i; j++){
            printf("%d ", j);
        }printf("\n");

    }
}