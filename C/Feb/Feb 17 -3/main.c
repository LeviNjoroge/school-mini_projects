#include <stdio.h>
int main(){
    int rpt=0;
    int mark;
    char grade;

    do{
        void redo(){
            printf("Run again?\nEnter 1 to continue\n");
            scanf("%d",&rpt);
        }
        void checking_grade(){
            if(mark>=70)
                grade='A';
            else if(mark>=60)
                grade='B';
            else if(mark>=50)
                grade='C';
            else if(mark>=40)
                grade='D';
            else
                grade='F';
            printf("Your grade for the exam is %c\n",grade);
       }
       printf("Enter the mark you scored: ");
       scanf("%d",&mark);
       if(mark>=0&&mark<=100)
        checking_grade();
       else
        printf("Wrong input\n");
       redo();
    }
    while(rpt==1);
    return 0;
}
