#include<stdio.h>
int main(){
    char ch;
    printf("Enter Alphabet u want to check : ");
    scanf ("%c", &ch);

    if ( ch >= 'a' && ch <= 'z' ){
        printf ("Lower Case");
    }
    else if (ch >= 'A' && ch <= 'Z'){
        printf("Upper Case");
    }

    return 0;
}