import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class VendingMachine {
    private JFrame frame;
    private JButton gumButton;
    private JButton chocolateButton;
    private JButton popcornButton;
    private JButton juiceButton;
    private JButton totalButton;
    private JButton quitButton;
    private JLabel totalLabel;
    private int gumCount = 0, chocolateCount = 0, popcornCount = 0, juiceCount = 0;

    public VendingMachine() {
        frame = new JFrame("Vending Machine");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new BorderLayout());

        // Create panel for buttons
        JPanel buttonPanel = new JPanel();
        buttonPanel.setLayout(new BoxLayout(buttonPanel, BoxLayout.Y_AXIS));

        gumButton = new JButton("Get Gum ($1)");
        gumButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if (gumCount > 0) {
                    gumCount--;
                    totalLabel.setText("Gum: " + gumCount);
                    updateTotal();
                } else {
                    JOptionPane.showMessageDialog(frame, "Sorry, no more gum available.");
                }
            }
        });

        chocolateButton = new JButton("Get Chocolate ($2)");
        chocolateButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if (chocolateCount > 0) {
                    chocolateCount--;
                    totalLabel.setText("Chocolate: " + chocolateCount);
                    updateTotal();
                } else {
                    JOptionPane.showMessageDialog(frame, "Sorry, no more chocolate available.");
                }
            }
        });

        popcornButton = new JButton("Get Popcorn ($3)");
        popcornButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if (popcornCount > 0) {
                    popcornCount--;
                    totalLabel.setText("Popcorn: " + popcornCount);
                    updateTotal();
                } else {
                    JOptionPane.showMessageDialog(frame, "Sorry, no more popcorn available.");
                }
            }
        });

        juiceButton = new JButton("Get Juice ($4)");
        juiceButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if (juiceCount > 0) {
                    juiceCount--;
                    totalLabel.setText("Juice: " + juiceCount);
                    updateTotal();
                } else {
                    JOptionPane.showMessageDialog(frame, "Sorry, no more juice available.");
                }
            }
        });

        totalButton = new JButton("Display Total");
        totalButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                updateTotal();
            }
        });

        quitButton = new JButton("Quit");
        quitButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                frame.dispose();
            }
        });

        totalLabel = new JLabel();

        buttonPanel.add(gumButton);
        buttonPanel.add(chocolateButton);
        buttonPanel.add(popcornButton);
        buttonPanel.add(juiceButton);
        buttonPanel.add(totalButton);
        buttonPanel.add(quitButton);

        // Create panel for labels
        JPanel labelPanel = new JPanel();
        labelPanel.setLayout(new BoxLayout(labelPanel, BoxLayout.Y_AXIS));

        JLabel gumLabel = new JLabel("Gum: " + gumCount);
        labelPanel.add(gumLabel);

        JLabel chocolateLabel = new JLabel("Chocolate: " + chocolateCount);
        labelPanel.add(chocolateLabel);

        JLabel popcornLabel = new JLabel("Popcorn: " + popcornCount);
        labelPanel.add(popcornLabel);

        JLabel juiceLabel = new JLabel("Juice: " + juiceCount);
        labelPanel.add(juiceLabel);

        frame.add(buttonPanel, BorderLayout.CENTER);
        frame.add(labelPanel, BorderLayout.EAST);

        frame.pack();
        frame.setVisible(true);
    }

    private void updateTotal() {
        int total = gumCount + chocolateCount + popcornCount + juiceCount;
        totalLabel.setText("Total: " + total);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new VendingMachine();
            }
        });
    }
}