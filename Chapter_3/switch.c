#include<stdio.h>
#include<math.h>


int main (){
    int day; //1- Monday, 2- Tues, 3- Wed
    printf("enter day : ");
    scanf("%d", &day);
    switch (day){ 
        case 1 : printf("monday \n");
                    break;
        case 2 : printf("Tuesday \n");
                    break;
        case 3 : printf("Wednesday \n");
                    break; 
        default : printf("not a valid day");
    }

    return 0;
}
