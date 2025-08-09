#include<stdio.h>
#include<stdbool.h>


// this program is to understand the concept of boolean operations in c
// here i stores the comparison value (0 or 1) in an integer
int main (){

    int a, b;
    int check;
    printf("Enter First number: "); 
    scanf("%d", &a);
    printf("Enter seconf number: ");
    scanf("%d", &b);

    printf("checking with boolean .....\n");
    

    check=(a>b);

    if (check==0){
        printf("First number %d less than second number %d", a, b);
    }

    else if (check == 1){
        printf("Firs tnumber %d is largst than second number %d", a, b);
    }

return 0;
}