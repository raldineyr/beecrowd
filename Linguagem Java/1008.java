import java.io.IOException;
import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) throws IOException {
    Scanner entrada = new Scanner(System.in);
    
    int numeroFuncionario = entrada.nextInt();
    int horasTrabalhada = entrada.nextInt();
    double valorHoraTrabalhada = entrada.nextDouble();
    
    System.out.println("NUMBER = " + numeroFuncionario);
    System.out.printf("SALARY = U$ %.2f\n",valorHoraTrabalhada * horasTrabalhada);
    entrada.close();
    }
 
}
