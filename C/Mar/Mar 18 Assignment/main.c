#include <stdio.h>
int marks[4];
char grades[4];
float grade_points[4];
float cgpa;

int basic_calculator();
int calculate_cgpa(){
    for(int i=0;i<4;i++){
        if (marks[i] >= 90 && marks[i] <= 100){
            grades[i] ='A';
            grade_points[i] = 5.0;
        }
        else if (marks[i] >= 80 && marks[i] <= 89){
            grades[i] ='A';
            grade_points[i] = 5.0;
        }
        else if (marks[i] >= 75 && marks[i] <= 79){
            grades[i] ='B';
            grade_points[i] = 4.5;
        }
        else if (marks[i] >= 70 && marks[i] <= 74){
            grades[i] ='B';
            grade_points[i] = 4.0;
        }
        else if (marks[i] >= 65 && marks[i] <= 69){
            grades[i] ='C';
            grade_points[i] = 3.5;
        }
        else if (marks[i] >= 60 && marks[i] <= 64){
            grades[i] ='C';
            grade_points[i] = 3.0;
        }
        else if (marks[i] >= 55 && marks[i] <= 59){
            grades[i] ='D';
            grade_points[i] = 2.5;
        }
        else if (marks[i] >= 50 && marks[i] <= 54){
            grades[i] ='D';
            grade_points[i] = 2.0;
        }
        else if (marks[i] >= 45 && marks[i] <= 49){
            grades[i] ='E';
            grade_points[i] = 1.5;
        }
        else if (marks[i] >= 40 && marks[i] <= 44){
            grades[i] ='E';
            grade_points[i] = 1.0;
        }
        else{
            grades[i] ='F';
            grade_points[i] = 0.0;
        }
    }

    //to calculate the cgpa, the formula is used. I noticed that the CU in the table is 4 for all the courses so I assumed the it is a constant at this instance.
    #define CU 4
    float cgpa_num, cgpa_den;
          for(int i=0;i<4;i++){
                cgpa_num+=(grade_points[i]*CU);
                cgpa_den+=CU;
          }

    cgpa=cgpa_num/cgpa_den;

}

basic_calculator(){
    #define divide /
    #define multiply *
    #define add +
    #define substract -


}

void print_to_file(){
    FILE *file = fopen("cgpa_calculations.doc","a");
    fprintf(file,"-----------------------------------------------------------------\n");
    fprintf(file,"|CODE          |MARKS\t\t|GRADE          |POINTS (G.P.)     |\n");
    fprintf(file,"-----------------------------------------------------------------\n");
    fprintf(file,"|CSK 1101      |%d\t\t|%c              |%.2f              |\n",marks[0],grades[0],grade_points[0]);
    fprintf(file,"|CSK 1102      |%d\t\t|%c              |%.2f              |\n",marks[1],grades[1],grade_points[1]);
    fprintf(file,"|CSK 1104      |%d\t\t|%c              |%.2f              |\n",marks[2],grades[2],grade_points[2]);
    fprintf(file,"|CSK 1105      |%d\t\t|%c              |%.2f              |\n",marks[3],grades[3],grade_points[3]);
    fprintf(file,"-----------------------------------------------------------------\n");
    fprintf(file,"CGPA:\t%.2f          \n",cgpa);
    fprintf(file,"-----------------------------------------------------------------\n");

    printf("Word document file 'cgpa_calculations.doc' generated successfully.\n");
}
void display_to_user(){
    printf("-----------------------------------------------------------------\n");
    printf("|CODE          |MARKS\t\t|GRADE          |POINTS (G.P.)  |\n");
    printf("-----------------------------------------------------------------\n");
    printf("|CSK 1101      |%d\t\t|%c              |%.2f           |\n",marks[0],grades[0],grade_points[0]);
    printf("|CSK 1102      |%d\t\t|%c              |%.2f           |\n",marks[1],grades[1],grade_points[1]);
    printf("|CSK 1104      |%d\t\t|%c              |%.2f           |\n",marks[2],grades[2],grade_points[2]);
    printf("|CSK 1105      |%d\t\t|%c              |%.2f           |\n",marks[3],grades[3],grade_points[3]);
    printf("-----------------------------------------------------------------\n");
    printf("CGPA:\t%.2f          \n",cgpa);
    printf("-----------------------------------------------------------------\n");
}

int main(){



    // Prompt the user to enter marks for four course units
    printf("Enter marks for four course units:\n");
    printf("CSK 1101: ");
    scanf("%d", &marks[0]);
    printf("CSC 1102: ");
    scanf("%d", &marks[1]);
    printf("CSC 1104: ");
    scanf("%d", &marks[2]);
    printf("CSC 1105: ");
    scanf("%d", &marks[3]);

    calculate_cgpa();
    display_to_user();
    print_to_file();

    return 0;
}
