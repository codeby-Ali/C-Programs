#include<stdio.h>
int main (){
    int rank;
    printf("Enter your rank in JEE Mains");
    scanf("%d", &rank);
    
   if (rank < 5000) {
    printf("You will easily get CSE in NITs\n");
    printf("Well done!!\n");
}
else if (rank >= 5000 && rank < 50000) {
    printf("You can get CSE somewhere other than NITs\n");
}
else {
    printf("LEAVE !\n");
}
    return 0; 

}