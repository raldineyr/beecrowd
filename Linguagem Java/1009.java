import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        
        Scanner entrada = new Scanner(System.in);
        
        String nome = entrada.nextLine();
        double salario = entrada.nextDouble();
        double totalVendas = entrada.nextDouble();
        double comissao = salario + (totalVendas*0.15);
        
        System.out.printf("TOTAL = R$ %.2f\n",comissao);
        
    entrada.close();
    }
}
