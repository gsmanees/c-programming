#include<stdio.h>
int main (){
    int weight, height, bmi;
    printf("Enter weight in kg: ");
    scanf("%d", &weight);
    printf("Enter height in cm: ");
    scanf("%d", &height);
    height = height / 100;  // Convert height to meters
    bmi = weight / (height * height);
    printf("Your BMI is: %d\n", bmi);
    return 0;
}

