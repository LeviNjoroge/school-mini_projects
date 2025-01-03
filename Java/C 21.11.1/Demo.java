        // java program that includes the following:
        // 1. A method to calculate the square of a number 
        //          - should allow the user to enter an integer and return the square
        // 2. A method to check if the number is even or odd 
        //          - should receive an interger input an dreturn true if the number is even otherwise false
        // 3. The main method: Should prompt the user to enter an integer and a name, 
        // first call the method to greet the user
        // it should then call the method that was computing the square of a number and display the result, 
        // then call the other method that was checking if the number was odd or even then display the result
        // 4. A method to display the greeting
        //          - Should receive a string representing a name then print a greeting message "Hello, [name]"
import java.util.*;
// import javax.swing.JOptionPane;

public class Demo{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your name and number: ");
        String name = input.nextLine();
        int number = input.nextInt();
        System.out.println(displayGreeting(name));
        System.out.println("The square of the number is: "+calSquare(number));
        String isEven = isEven(number)==true?"Even":"Odd";
        System.out.println("The number is: "+isEven);

        // String name = JOptionPane.showInputDialog("Enter Your name");
        // int number = Integer.parseInt(JOptionPane.showInputDialog("Enter the number"));
        // JOptionPane.showMessageDialog(null, displayGreeting(name));
        // JOptionPane.showMessageDialog(null, "The square of the number is: "+calSquare(number));
        // JOptionPane.showMessageDialog(null, "The number is Even? "+isEven(number));
    }

    public static int calSquare(int number){
        int square = 0;
        square = number*number;
        return square;
    }
    
    public static boolean isEven(int number){
        if(number % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    }

    public static String displayGreeting(String name){
        return "Hello "+name;
    }

}