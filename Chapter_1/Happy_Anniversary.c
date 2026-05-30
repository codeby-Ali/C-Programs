#include <stdio.h>
#include <stdlib.h>
// Happy Anniversary Mumma & Papa
int main(){

    char papa[50];
    char mumma[50];
    int marriageyear, currentyear, totalyears;
    printf("Enter your name Papa - ");
    scanf("%s", papa);

    printf("Enter your name Mumma - ");
    scanf("%s", mumma);

    printf("Enter Marriage Year: ");
    scanf("%d", &marriageyear);

     printf("Enter Current Year: ");
    scanf("%d", &currentyear);

    totalyears = currentyear - marriageyear;

     printf("\n");
    printf("****************************************\n");
    printf("*                                      *\n");
    printf("*        HAPPY %dth ANNIVERSARY        *\n", totalyears);
    printf("*                                      *\n");
    printf("*         %s       %s            *\n", papa, mumma        );
    printf("*                                      *\n");
    printf("*    Celebrating %d Years Together     *\n", totalyears);
    printf("*                                      *\n");
    printf("*    Wishing You Happiness Forever     *\n");
    printf("*                                      *\n");
    printf("*   by your beloved - Shanaya & Ali    *\n");
    printf("****************************************\n");

        
system("Anniversary.png");
    return 0; 
}