#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a>b)
        printf("The greater number is a",a);
    else
        printf("The largest number is b",b);
    return 0;
}
