#include <stdio.h>
int main(){

    int day;
    printf("Enter number: ");
    scanf("%d",&day);

    switch(day){
    case 1:
        printf("It is a Sunday!");
        break;

    case 2:
        printf("It is a Monday!");
        break;

    case 3:
        printf("It is a Tuesday!");
        break;

    case 4:
        printf("It is a Wednesday!");
        break;

    case 5:
        printf("It is a Thursday!");
        break;

    case 6:
        printf("It is a Friday!");
        break;

    case 7:
        printf("It is a Saturday!");
        break;

    default:
        printf("Wrong day");
    }

    return 0;
}
