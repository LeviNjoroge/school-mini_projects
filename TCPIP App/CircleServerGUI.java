import java.io.*;
import java.net.*;

public class CircleServerGUI {
    public static void main(String[] args) {
        try (ServerSocket serverSocket = new ServerSocket(8080);  // Create server on port 8080
             Socket socket = serverSocket.accept();               // Accept client connection
             BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
             PrintWriter out = new PrintWriter(socket.getOutputStream(), true)) {

            System.out.println("Client connected.");

            while (true) {
                // Read radius from client, calculate area, and send result back
                double radius = Double.parseDouble(in.readLine());         // Receive radius from client
                double area = Math.PI * Math.pow(radius, 2);               // Calculate area
                out.println(area);                                         // Send area back to client

                System.out.println("Processed radius: " + radius + ", Area: " + area); // Log calculations
            }

        } catch (IOException e) {
            e.printStackTrace(); // Handle I/O exceptions
        }
    }
}
