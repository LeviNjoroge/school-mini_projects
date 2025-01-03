#include <stdio.h>
#include <stdlib.h>

#define NUM_COURSE_UNITS 4
#define CREDIT_UNITS 4

// Function to calculate CGPA and display grades
void print_to_file(){
    FILE *file = fopen("cgpa_grades.doc","a");
    fprintf(file,"-----------------------------------------------------------------");
    fprintf(file,"|CODE          |MARKS            |GRADE           |POINTS (G.P.) ");
    fprintf(file,"-----------------------------------------------------------------");
    fprintf(file,"|CSK 1101      |%d               |%c              |%f            ",marks(0),grade(0),points(0));
    fprintf(file,"|CSK 1102      |%d               |%c              |%f            ",marks(1),grade(1),points(1));
    fprintf(file,"|CSK 1104      |%d               |%c              |%f            ",marks(2),grade(2),points(2));
    fprintf(file,"|CSK 1105      |%d               |%c              |%f            ",marks(3),grade(3),points(3));
    fprintf(file,"-----------------------------------------------------------------");

    //fclose{file};

    printf("Word document file 'cgpa_grades.doc' generated successfully.\n");
}

void calculate_cgpa(int marks[], char grades[], float* cgpa) {
    int i;
    int total_credit_units = NUM_COURSE_UNITS * CREDIT_UNITS;
    float total_grade_points = 0.0;

    // Iterate through each course unit
    for (i = 0; i < NUM_COURSE_UNITS; i++) {
        // Determine grade based on marks
        if (marks[i] >= 80 && marks[i] <= 100)
            grades[i] ='A';
        else if (marks[i] >= 70 && marks[i] <= 79)
            grades[i] = 'B';
        else if (marks[i] >= 60 && marks[i] <= 69)
            grades[i] = 'C';
        else if (marks[i] >= 50 && marks[i] <= 59)
            grades[i] = 'D';
        else if (marks[i] >= 45 && marks[i] <= 49)
            grades[i] = 'E';
        else
            grades[i] = 'F';

        // Calculate total grade points for each course unit based on the determined grade
        switch (grades[i]) {
            case 'A':
                total_grade_points += 5.0 * CREDIT_UNITS;
                break;
            case 'B':
                total_grade_points += 4.0 * CREDIT_UNITS;
                break;
            case 'C':
                total_grade_points += 3.0 * CREDIT_UNITS;
                break;
            case 'D':
                total_grade_points += 2.0 * CREDIT_UNITS;
                break;
            case 'E':
                total_grade_points += 1.5 * CREDIT_UNITS;
                break;
            case 'F':
                total_grade_points += 0.0 * CREDIT_UNITS;
                break;
            default:
                total_grade_points += 0.0; // Invalid grade defaults to 0.0
        }
    }

    // Calculate CGPA
    *cgpa = total_grade_points / total_credit_units;

    // Display grades and CGPA in the VS Code terminal
    printf("Grades:\n");
    for (i = 0; i < NUM_COURSE_UNITS; i++) {
        printf("Course unit %d: %c\n", i + 1, grades[i]);
    }
    printf("CGPA: %.2f\n", *cgpa);
}

// function to generate a Word document with the CGPA and grades
void generate_word_document(float cgpa, char grades[]) {
    FILE *file;

    // Open the output Word document file for writing
    file = fopen("cgpa_grades.doc", "w");
    if (file == NULL) {
        printf("Error creating the Word document file.\n");
        return;
    }

    fprintf(file, "CGPA: %.2f\n\n", cgpa);
    fprintf(file, "Grades:\n");
    for (int i = 0; i < NUM_COURSE_UNITS; i++) {
        fprintf(file, "Course unit %d: %c\n", i+ 1, grades[i]);
    }

    fclose(file);

    printf("Word document file 'cgpa_grades.doc' generated successfully.\n");
}

int main() {
    int marks[NUM_COURSE_UNITS];
    char grades[NUM_COURSE_UNITS];
    float cgpa;

    // Prompt the user to enter marks for four course units
    printf("Enter marks for four course units:\n");
    printf("CSK 1101:\nMarks: ");
    scanf("%d", &marks[0]);
    printf("CSC 1102:\nMarks: ");
    scanf("%d", &marks[1]);
    printf("CSC 1104:\nMarks: ");
    scanf("%d", marks[2]);
    printf("CSC 1105:\nMarks: ");
    scanf("%d", &marks[3]);

    // Calculate CGPA and display grades
    calculate_cgpa(marks, grades, &cgpa);

    // Generate Word document with CGPA and grades
    ///generate_word_document(cgpa, grades);
    print_to_file();

    return 0;
}
