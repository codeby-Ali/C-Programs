#include <stdio.h>
int main (){ 
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    if ( marks >= 0 && marks <= 30 ){
        printf(" You have failed !! ");

    }
    else if (marks > 30 && marks <= 100) {
        printf("You have passed !");
    }
    else{
        printf ("Invalid Input");
    }
return 0;
}