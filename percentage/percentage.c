#include<stdio.h>

int main(){


    // variables declarations
    int totalScore;
    int studScore;
    float percent;

    //total acore reading 
    printf("\nEnter Maximum score: ");
    scanf("%d", &totalScore);

    //student score reading 
    printf("\nEnter student score: ");
    scanf("%d", &studScore);

    //calculating percentage
    percent = (float) studScore/totalScore*100;


    //printing percentage 
    printf("\nPercentage of the score: %.2f", percent);

    return 0;
}