#include <stdio.h>

int sum(int x, int y);

int main(){
    int tot = sum(3,6);
    printf("The result is %d",tot);
}
sum (x, y){
    int answer =0;
    answer=x+y;
    return answer;
}
