#include<stdio.h>

float area(float);
float cir(float);

int main(){
    
    float r=0;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Area of circle = %f",area(r));
    printf("\ncircumference of circle = %f",cir(r));

    return 0;

}

float area(float r){
    float pi=3.14;
    float are=0;

    float area = pi*r*r;
    return area;

}

float cir(float r){
    float pi=3.14;
    float are=0;

    float cir = 2*pi*r;
    return cir;

}