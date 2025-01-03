import java.util.Scanner;

public class method {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int number;
        String name="";
        System.out.println("Enter your name");
        name= read.nextLine();
        System.out.println("Enter the number"); 
        number = read.nextInt();
        System.out.println(callSquare(number));
        System.out.println(isEven(number));
       displayGreetings(name);

    }
    static int callSquare(int a){
    return a*a;
    
}
    static boolean isEven(int b){
        if(b%2==0) return true;
        else return false;
    }
    static void displayGreetings(String str){
    System.out.println("Hello"+str);
    }
}