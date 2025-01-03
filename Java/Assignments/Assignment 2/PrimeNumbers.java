// java program to display the prime numbers btwn 1 and 100

// modify the above program to be able to compute and display the sum of all the prime numbers divisible by 7

/*
Approach:
To check divisibility, the program will note down when a number is divisible by another and keeps a count,
a prime number is a number that has a divisibility count of two; ie 1 and itself, so the program will check,
the divisibility count and diclares the number a prime if it has a divisibility count of 2 or less for the case of 1
*/
public class PrimeNumbers {

    public static void main(String[] args) {
        Primes();
    }

    public static void Primes(){
        
        int limit = 10000;
        for (int i = 2; i <= limit; i++) { //by definition, a prime number is a number that is a number greater than 1,...
            int DivisibilityCount = 0;
            for (int j = 1; j <= limit; j++) { //start with j=1 coz division by zero is infinite
                if (i%j==0) {
                    DivisibilityCount++;
                    // System.out.println(i+" is divisible by "+j);
                }
            }
            // System.out.println(i+" has a divisibility count of "+DivisibilityCount);
            if (DivisibilityCount<=2) {
                // System.out.println(i+" is a prime number.");
                System.out.println(i);
            }
        }
    }
}