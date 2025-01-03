// modify the above program to be able to compute and display the sum of all the prime numbers divisible by 7

public class PrimesDivisibleBy7 {
        public static void main(String[] args){
            int SumOfPrimesDivisibleBy7 = 0;
            int DivisibilityCount = 0;
            int limit = 100;
            for (int i = 1; i <= limit; i++) {
                for (int j = 1; j <= limit; j++) { //start with j=1 coz division by zero is infinite
                    if (i%j==0) {
                        DivisibilityCount++;
                        // System.out.println(i+" is divisible by "+j);
                    }
                }
                // System.out.println(i+" has a divisibility count of "+DivisibilityCount);
                if (DivisibilityCount<=2 && i%7==0) {
                    // System.out.println(i);
                    SumOfPrimesDivisibleBy7+=i;
                }
                DivisibilityCount = 0;
            }
            System.out.println("The sum of all primes that are divisible by 7 is: "+SumOfPrimesDivisibleBy7);
        }
    }