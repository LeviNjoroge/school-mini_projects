// Vending Machine

import javax.swing.JOptionPane;

public class VendingMachine {

    public static void main(String args[]){
        int countGum = 0;
        int countChocolate = 0;
        int countPopcorn = 0;
        int countJuice = 0;
        JOptionPane.showMessageDialog(null, "Welcome to the vending machine!");
        
        while (true) {
            int choice = 0;
            try {
                choice = Integer.parseInt(JOptionPane.showInputDialog(null, "Enter a number corresponding to the following options:\n1. Get Gum\n2. Get Chocolate\n3. Get Popcorn\n4. Get Juice\n5. Display total sold so far\n6. Quit"));

            } catch (Exception e) {
                // TODO: handle exception
            }
            
            switch (choice) {
                case 1:
                    JOptionPane.showMessageDialog(null,"Here is your gum!");
                    countGum ++;
                    break;
                case 2:
                    JOptionPane.showMessageDialog(null,"Here is your chocolate!");
                    countChocolate ++;
                    break;
                case 3:
                    JOptionPane.showMessageDialog(null,"Here is your popcorn!");
                    countPopcorn ++;
                    break;
                case 4:
                    JOptionPane.showMessageDialog(null,"Here is your juice!");
                    countJuice ++;
                    break;
                case 5:
                    JOptionPane.showMessageDialog(null,"The following items were sold:\n"+countGum+" items of gum sold!\n"+countChocolate+" items of chocolae sold!\n"+countPopcorn+" items of popcorn sold!\n"+countJuice+" items of juice sold!\n");
                    break;
                case 6:
                    JOptionPane.showMessageDialog(null,"Bye!");
                    return;
                default:
                    JOptionPane.showMessageDialog(null,"Error, options 1 - 6 only!");
                    break;
            }
        }

    }
}