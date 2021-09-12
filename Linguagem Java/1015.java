import java.io.IOException;
import java.util.Scanner;

 public class Main {
 
    public static void main(String[] args) throws IOException {
 
     	Scanner entrada = new Scanner(System.in);
     	
        double X1 = entrada.nextDouble();
        double Y1 = entrada.nextDouble();
        double X2 = entrada.nextDouble();
        double Y2 = entrada.nextDouble();
        
        double distancia = Math.sqrt(Math.pow((X2 - X1), 2) + Math.pow((Y2 - Y1), 2));
        System.out.println(String.format("%.4f", distancia)); 
 
    }
 
}
