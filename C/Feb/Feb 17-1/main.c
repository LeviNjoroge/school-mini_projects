#include <stdio.h>
int main(){

int rpt;
do{
        int marks;

        void check_marks(){
        printf("Enter marks: ");
        scanf("%d",&marks);
        }
        check_marks();

        if(marks>50)
            printf("You have passed the exam");

        else
            printf("You have failed the exam!!\n");
    printf("\n\nGo again?\n If yes, enter 1\n");
    scanf("%d",&rpt);
}
    while(rpt==1);
    return 0;
}
