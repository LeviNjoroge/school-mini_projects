import java.util.*;

class WeekDays {
    public static void main(String[] args) {
        //int day = 4;

        Scanner sc = new Scanner(System.in);
        System.out.print("Input a value between 1 and 7:");

        int day = sc.nextInt();
        String weekdayString = null;

            switch (day) {
                case 1:
                    weekdayString = "Monday";
                    break;
                case 2:
                    weekdayString = "Tuesdat";
                    break;
                case 3:
                    weekdayString = "Wednesday";
                    break;
                case 4:
                    weekdayString = "Thursday";
                    break;
                case 5:
                    weekdayString = "Friday";
                    //break;
                case 6:
                    weekdayString = "Saturday";
                    break;
                case 7:
                    weekdayString = "Sunday";
                    break;
                default:
                    System.out.println("Invalid input! Enter a value between 1 and 7!");
            }
            System.out.println("The day of the week is " + weekdayString);

            //System.out.printin("Heyy");
    }
}