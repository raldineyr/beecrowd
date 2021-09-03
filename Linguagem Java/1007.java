import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        
        int A = entrada.nextInt();
        int B = entrada.nextInt();
        int C = entrada.nextInt();
        int D = entrada.nextInt();
        
        int DIF = (A*B - C*D);
        System.out.println("DIFERENCA = "+ DIF);
        entrada.close();
    }
 
}
