#include <stdio.h>
int a=5, b=6, c=5, d=1;
int x;
main(){

    x= a<b||a<c&&c<d;
    printf("\nWithout parenthesis the expression evaluates as %d",x);

    x= (a<b||a<c)&&c<d;
    printf("\nWith parenthesis the expression evaluates as %d",x);


    return 0;
}
