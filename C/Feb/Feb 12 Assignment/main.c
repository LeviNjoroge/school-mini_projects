#include <stdio.h>

int main(){

    //assign a constant value for the desk cost since it doesn't change
    const int desk_cost= 6450;
    //declare variables to be used, used the float datatype
    //because I will be using some spacial function that only works with the type.
    float fat_std, thin_std, desk_fat, desk_thin, tot_desks, tot_amount;

    //Prompts the user to input the number of fat students admitted.
    printf("Enter the number of fat students admitted: ");
    //Read the number of fat students admitted as inputed by the user.
    scanf("%f",&fat_std);

    //Prompts the user to input the number of thin students admitted.
    printf("Enter the number of thin students admitted: ");
    //Read the number of thin students admitted as inputed by the user.
    scanf("%f",&thin_std);

    /* Find the desks required by the fat and thin students and
    round up the number (using the special function "ceil").
    rounding up because fat and thin students cant share a desk.*/
    desk_fat = ceil(fat_std/3);
    desk_thin = ceil(thin_std/4);

    //Calculate and display the number of desks required
    tot_desks=desk_fat+desk_thin;
    printf("The Number of Desks required are: %.0f\n",tot_desks); //used .0 prefixed b4 f to display a 0 decimal points.

    //Calculate and display the amount required for the desks.
    tot_amount=tot_desks*desk_cost;
    printf("The Total Amount required is: Ksh. %.0f\n",tot_amount);

    return 0;
}
