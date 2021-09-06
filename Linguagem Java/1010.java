import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        
        int codigoPeca1 = entrada.nextInt();
        int numeroPeca1 = entrada.nextInt();
        double unidadePeca1 = entrada.nextDouble();
        
        int codigoPeca2 = entrada.nextInt();
        int numeroPeca2 = entrada.nextInt();
        double unidadePeca2 = entrada.nextDouble();
        
        double valorPagar = (numeroPeca1 * unidadePeca1) + (numeroPeca2 * unidadePeca2);
        
        System.out.printf("VALOR A PAGAR: R$ %.2f\n",valorPagar);
        entrada.close();
    }
 
}
