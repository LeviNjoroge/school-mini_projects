#include <stdio.h>

int number;

void decimal(){
    switch (number){
        case 0:
            printf("zero");
            break;
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;

    }
}

void teen(){
    switch (number){
        case 11:
            printf("eleven");
            break;
        case 12:
            printf("twelve");
            break;
        case 13:
            printf("thirteen");
            break;
        case 14:
            printf("fourteen");
            break;
        case 15:
            printf("fiveteen");
            break;
        case 16:
            printf("sixteen");
            break;
        case 17:
            printf("seventeen");
            break;
        case 18:
            printf("eighteen");
            break;
        case 19:
            printf("nineteen");
            break;
    }
}

void conversion(){
        if(number >=0&&number <=9){
        decimal();
    }else if(number > 9){
        while(number >1000){
            int temp =number;
            number =floor(number/1000);
            decimal();
            printf(" thousand ");
            number=(temp%1000);
        }
        while(number >100){
            int temp =number;
            number =floor(number/100);
            decimal();
            printf(" hundred ");
            number=(temp%100);
        }
        while(number >20){
            int temp =number;
            number =floor(number/10);
            printf("and ");
            if(number==3){
                printf("thirty ");
            }
            else if(number==2){
                printf("twenty ");
            }
            else{
                decimal();
                printf("ty ");
            }

            number=(temp%10);
        }
        while(number >10){
            int temp =number;
            number =floor(number);
            teen();
            return 0;
        }
        while(number<10){
            decimal();
            return 0;
        }
    }
}

int main(){

    printf("Enter the integer number: ");
    scanf("%d",&number);

    conversion();

    return 0;
}
