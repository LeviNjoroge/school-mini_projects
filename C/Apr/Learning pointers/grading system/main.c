#include <stdio.h>
int std_marks[]={32,78,21,90,12,100,56,54,43,64};
void grade(int *std_marks);

int main(){
    grade(std_marks);
    return 0;
}

grade(){
    FILE *file = fopen("Student database.txt","w");
    char grade;
    int max=sizeof(std_marks)/sizeof(std_marks[0]);
    for(int i=0;i<max;i++){
        if(std_marks[i]>=70){
            grade='A';
        }
        else if(std_marks[i]>=60){
            grade='B';
        }
        else if(std_marks[i]>=50){
            grade='C';
        }
        else  if(std_marks[i]>=40){
            grade='D';
        }
        else {
            grade='F';
        }
        //if(std_marks[i]==0)break;
        printf("\nMark: %d\nGrade: %c\n",std_marks[i],grade);
        fprintf(file,"\nMark: %d\nGrade: %c\n",std_marks[i],grade);
    }
}


