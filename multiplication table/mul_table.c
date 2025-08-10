#include<stdio.h>
int main (){


     //   1 2 3
     //   2 4 6
     //   3 6 9

int i,j;
    for (i=1;i<=3;i++)
    {
        for (j=1;j<=3;j++) {
        printf("%d ", i*j);
        }
        printf("\n");


    }
        
    return 0;
}