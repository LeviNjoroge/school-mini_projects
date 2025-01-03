public class Main {

    public static void main(String[] args) {
        int [] x = new int[5];
        x[0]=31;
        x[1]=-14;
        x[2]=99;
        x[3]=109;
        x[4]=51;
        for (int i = 0; i < x.length; i++) {
            for (int j = 1; j < x.length; j++) {
                x[i]=Math.max(x[i], x[j]);
                i++;
            }
        }
        for (int i = 0; i < x.length; i++) {
            System.out.println(x[i]);
        }
    }
}