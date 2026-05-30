#include <stdio.h>
// Perimeter of Rectangle
int main(){
    int length;
    printf ("Enter Length of rectangle = ");
     scanf ("%d", &length);

    int breadth;
    printf ("Enter Breadth of rectangle = ");

    scanf ("%d", &breadth);

    printf("Perimeter of Rectangle is %d" , 2 * length + 2 * breadth );

    return 0;

}

