// Source code is decompiled from a .class file using FernFlower decompiler.
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.Socket;
import java.util.Scanner;

public class CircleClient {
   public CircleClient() {
   }

   public static void main(String[] var0) {
      try {
         Socket var1 = new Socket("localhost", 8080);

         try {
            BufferedReader var2 = new BufferedReader(new InputStreamReader(var1.getInputStream()));

            try {
               PrintWriter var3 = new PrintWriter(var1.getOutputStream(), true);

               try {
                  Scanner var4 = new Scanner(System.in);

                  try {
                     System.out.print("Enter the radius of the circle: ");
                     double var5 = var4.nextDouble();
                     var3.println(var5);
                     String var7 = var2.readLine();
                     System.out.println("The area of the circle is: " + var7);
                  } catch (Throwable var12) {
                     try {
                        var4.close();
                     } catch (Throwable var11) {
                        var12.addSuppressed(var11);
                     }

                     throw var12;
                  }

                  var4.close();
               } catch (Throwable var13) {
                  try {
                     var3.close();
                  } catch (Throwable var10) {
                     var13.addSuppressed(var10);
                  }

                  throw var13;
               }

               var3.close();
            } catch (Throwable var14) {
               try {
                  var2.close();
               } catch (Throwable var9) {
                  var14.addSuppressed(var9);
               }

               throw var14;
            }

            var2.close();
         } catch (Throwable var15) {
            try {
               var1.close();
            } catch (Throwable var8) {
               var15.addSuppressed(var8);
            }

            throw var15;
         }

         var1.close();
      } catch (IOException var16) {
         var16.printStackTrace();
      }

   }
}
