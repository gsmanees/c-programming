#include<stdio.h>


// this program is to manipulate floating value output with variety of floating poit 
//  %.1f
int main(){

    float a=2.4; // floating value declaration
    printf("\n%f", a); // it will print result having 6 digit after decimal point
    printf("\n%.1f", a);// it will print result having 1 digit after decimal point
    printf("\n%.2f", a);// it will print result having 2 digit after decimal point
    printf("\n%.3f", a);// it will print result having 3 digit after decimal point
    printf("\n%.4f", a);// it will print result having 4 digit after decimal point



    return 0;
}