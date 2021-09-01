import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
    Scanner entrada = new Scanner(System.in);
       int A = entrada.nextInt();
       int B = entrada. nextInt();
       int PROD = A * B;
       
       System.out.println("PROD = " + A*B);
        entrada.close();
    }
 
}
