#include <stdio.h>
#include <math.h> //used in some functions

int main(){

//Function to iterate the program, (do while)
int rpt;
do{

    //variable declarations with the constant that will be used later
    float num;
    int choice;
    float result;
    const float PI = 3.141592653589793;

    //prompt the user to enter the numbers floating point numbers and consequently read the value.
    printf("Input the number: ");
    scanf("%f",&num);

    //convert the value to pi radians, which is identified by the inbuilt C functions in the math.h header
    float radian = num * (PI / 180.0);

    //display a menu
    printf("Choose an operation:\n1. Sine\n2. Cosine\n3. Tangent\n4. Logarithm\n5. ln\n6. Squareroot\n7. Cuberoot\n");
    scanf("%d",&choice);

    //if statement to perform the math calculation when a valid number is used, ie within the 1-7 range
    if(choice>=1&&choice<=7){
        switch (choice){
        case 1:
            result=sin(radian);//for the trigonometry, use the inbuilt functions eg sin(pi radians value)
            break;

        case 2:
            result=cos(radian);
            break;

        case 3:
            result=tan(radian);
            break;

        case 4:
            result=log10(num); //log10() is a functions used to calculate logs of value to the base of 10
            break;

        case 5:
            result=log(num); //the natural logarithm uses the function log()
            break;

        case 6:
            result=sqrt(num); //inbuilt function for finding square roots
            break;

        case 7:
            result=cbrt(num); //inbuilt function
            break;
        }
        printf("The result is %.4f\n",result);
    }
    else
        //error message displayed when an erroneous value is entered
        printf("Error!!!\n");

    //prompt the user whether to repeat the program or terminate
        printf("\nGo again?\nEnter 0 to continue, other to terminate:  \n");
        scanf("%d",&rpt);
}
while (rpt==0);

return 0;
}
