#include<stdio.h>


//function declaration
float area(float); //area
float cir(float); //circumference

int main(){
    
    float r=0; // radius

    //receiving area from user
    printf("Enter radius: ");
    scanf("%f", &r);

    //printing area & circumference with calling function inside printf
    printf("Area of circle = %f",area(r));
    printf("\ncircumference of circle = %f",cir(r));

    return 0;

}


//function definition
float area(float r){ // area function
    float pi=3.14;
    float are=0;

    float area = pi*r*r;
    return area;

}

float cir(float r){ // circumference 
    float pi=3.14;
    float are=0;

    float cir = 2*pi*r;
    return cir;

}