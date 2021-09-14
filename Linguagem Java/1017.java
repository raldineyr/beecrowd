import java.io.IOException;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
    Scanner entrada = new Scanner(System.in);
    
    int hora = entrada.nextInt();
    int quilometro = entrada.nextInt();
    
    System.out.printf("%.3f\n",(float)(hora*quilometro)/12);
 
    }
 
}
