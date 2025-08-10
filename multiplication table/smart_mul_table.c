#include<stdio.h>
int main(){
    int i=0, j=0, n=0;
    char c;


    x: printf("Enter the number whose multiplication table is to be printed: ");
    scanf("%d", &n);

     for (i=1; i<=10; i++){

        printf("%d x %d = %d\n", i, n, i*n);
    }
    
    printf("Do you want to continue? (y/n)?");
    scanf(" %c", &c);
    if (c=='y' || c=='Y'){
        goto x;
    }
    return 0;
}