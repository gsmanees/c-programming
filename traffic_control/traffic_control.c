#include<stdio.h>
#include<windows.h>
int main(){


    // red light on, stop --> 5 sec
    printf("Red Light ON\nSTOP !\n\n");
    Sleep(5000);


    // yellow light on, get ready --> 2 sec
    printf("Yellow Light ON\nGet Ready !\n\n");
    Sleep(2000);


    // green light on, go --> 5 sec
    printf("Green Light ON\nGo !\n\n");
    Sleep(5000);

    return 0;
}