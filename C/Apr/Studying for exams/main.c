#include <stdio.h>

int displayingScientific_no(int num){
    printf("This is the normal version: %d\n",num);
    printf("This is the scientific version: %e\n",num);
}

unsigned int number = 100;
float floating= 78.81289321;

int sum_up_to(int num1, int num2){
    int sum;
    for(;num1<=num2;num1++){
        sum+=num1;
    }
    printf("%d",sum);
}


int main(){

    //displayingScientific_no(3);
    //printf("%.3f",floating);
    sum_up_to(4,8);

    return 0;
}
