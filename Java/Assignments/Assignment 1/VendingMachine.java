// Vending Machine

import java.util.*;

public class VendingMachine {

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int countGum = 0;
        int countChocolate = 0;
        int countPopcorn = 0;
        int countJuice = 0;
        System.out.printf("Welcome to the vending machine! \n\n");
        
        while (true) {
            System.out.printf("Enter a number corresponding to the following options:\n1. Get Gum\n2. Get Chocolate\n3. Get Popcorn\n4. Get Juice\n5. Display total sold so far\n6. Quit\n:");
            while (!sc.hasNextInt()){
                System.out.println("Invalid input. Please enter an integer: ");
                sc.next(); //clear invalid input
            }
            int choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Here is your gum!");
                    countGum ++;
                    break;
                case 2:
                    System.out.println("Here is your chocolate!");
                    countChocolate ++;
                    break;
                case 3:
                    System.out.println("Here is your popcorn!");
                    countPopcorn ++;
                    break;
                case 4:
                    System.out.println("Here is your juice!");
                    countJuice ++;
                    break;
                case 5:
                    System.out.println("The following items were sold:");
                    System.out.println(countGum+" items of gum sold!");
                    System.out.println(countChocolate+" items of chocolae sold!");
                    System.out.println(countPopcorn+" items of popcorn sold!");
                    System.out.println(countJuice+" items of juice sold!\n");
                    break;
                case 6:
                    System.out.println("Bye!");
                    return;
                default:
                    System.out.println("Error, options 1 - 6 only!");
                    break;
            }
        }

    }
}