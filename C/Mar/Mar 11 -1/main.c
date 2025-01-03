#include <stdio.h>

int x[5];
void prompt_values(){
    for(int i=0;i<5;i++){
        printf("Enter the value for index %d: ",i);
        scanf("%d",&x[i]);
    }
}
void initialized(){

    int x[]={21, -3, 99, 0, 77};

    for(int i=0;i<5;i++){
        printf("%d\n",x[i]);
    }

}
void declaredFirst(){

    int x[5];
    x[0]=21;
    x[1]=-3;
    x[2]=99;
    x[3]=0;
    x[4]=7;

    printf("%d",x[2]);
    }
void output_using_for(){

    printf("\nThe values input are: \n");
        for(int j=0;j<5;j++){
        printf("%d\n",x[j]);
        }
    }
void output_using_while(){

    printf("\nThe values input are: \n");
        int n;
        while(n<5){
            ("The value at index %d is %d\n",n,x[n]);
            n++;
        }
    }
void max_value(){
    int max=x[0];
    for(int i=0;i<5;i++){
        if(x[i]>max){
            max=x[i];
        }
    }
    printf("The maximum value is: %d",max);
}
void total(){
    int total=0;
    for(int i=0;i<5;i++){
        total+=x[i];
    }
    printf("The total is %d",total);
}

int main(){

    prompt_values();
    total();

    return 0;
}
