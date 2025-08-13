#include<stdio.h>

// this program written by Anees Kokadan
int main(){

    // variable declarations
    int array[5];
    int i=0;
    int k=0;
    int j=0;
    int sum=0;
    float avg = 0.0;

    // reading array from user
    for (i=0; i<5; i++){
    printf("Enter arrray[%d]: ", i);
    scanf("%d", &k);
    array[i]=k;
    }

    // printing array 
    printf("You entered array: ");
    for (j=0; j<5; j++){
        printf("%d ", array[j]);

    }
    
    // printing average 

    for (i=0; i<5; i++){
        sum=sum+array[i];
    }
    avg = sum/5;
    printf("\nAverage of the elements: : %.2f", avg);

    return 0;
}