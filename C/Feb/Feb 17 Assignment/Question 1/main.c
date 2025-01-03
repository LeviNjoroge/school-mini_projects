#include <stdio.h>
int main(){
//to loop the operation, we use the do while function.
int rpt=1;
do{

    //variable declaration
    float num1, num2;
    int choice;
    float result;

    //prompt the user to enter two numbers
    printf("Enter two numbers:\n");
    scanf("%f %f",&num1, &num2);

    //Display a menu for the user to select an operation to be performed
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n");
    scanf("%d", &choice);

    //performs an operation based on the user's input
    switch (choice){
    case 1:
        result = num1+num2;
        break;

    case 2:
        result = num1-num2;
        break;

    case 3:
        result = num1*num2;
        break;

    case 4:
        result = num1/num2;
        break;

    case 5:
        result=(int)num1%(int)num2;
        break;

    //would have used the default part of the program but it would output 0 as the result
    }

    //to output the result of the calculation only if the selection is within the range specified.
    if(choice>=1&&choice<=5)
        printf("The result is: %.2f\n",result);
    else
        printf("Not a valid choice\n");

    //Asks the user if to repeat the program
    printf("Go again?\n Enter 0 to continue\n");
    scanf("%d",&rpt);
}
//iterates the program as long as the condition in while is true
while(rpt==0);
return 0;
}
