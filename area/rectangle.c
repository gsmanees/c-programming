#include<stdio.h>

int area(int, int);
int circumference (int, int);

int main(){

    int length=0;
    int width=0;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    printf("Area of rectangle = %d", area(length,width));
    printf("\nCircumference of Rectangle = %d",circumference(length, width) );
}

int area (int x, int y){
    int area=0;
    area = x*y;
    return area;
}

int circumference(int a, int b){

    int cir=0;
    cir=2*(a+b);
    return cir;
}