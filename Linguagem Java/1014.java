import java.io.IOException;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
    
    Scanner entrada = new Scanner(System.in);
 
    double X = entrada.nextDouble();
    double Y = entrada.nextDouble();
    
    System.out.printf("%.3f km/l\n",X/Y);
    }
 
}
