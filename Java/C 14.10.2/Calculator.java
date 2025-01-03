/**
 * Calculator
 */
import java.util.*;

public class Calculator {
   
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        

        System.out.println("Enter the first value:");
        float numb1 = sc.nextFloat();
        System.out.println("Enter an operation to be performed: +,-,*,/,% ");
        char operation = sc.next().charAt(0);
        System.out.println("Enter the second value:");
        float numb2 = sc.nextFloat();
        float ans = 0;
        switch (operation) {
            case '+':
                ans = numb1 + numb2;
                break;
            case '-':
                ans = numb1 - numb2;
                break;
            case '*':
                ans = numb1 * numb2;
                break;
            case '/':
                ans = numb1 / numb2;
                break;
            case '%':
                ans = numb1 % numb2;
                break;
            default:
                System.out.println("Invalid operation!");
                break;
        }
        System.out.println("The answer is: " + ans);
    }
}