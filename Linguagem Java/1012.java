import java.io.IOException;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
 
    Scanner entrada = new Scanner(System.in);
        
        double A = entrada.nextDouble();
        double B = entrada.nextDouble();
        double C = entrada.nextDouble();
        
        System.out.printf("TRIANGULO: %.3f\n",(A*C)/2);
        System.out.printf("CIRCULO: %.3f\n",3.14159*C*C);
        System.out.printf("TRAPEZIO: %.3f\n",((A+B)*C)/2);
        System.out.printf("QUADRADO: %.3f\n",B*B);
        System.out.printf("RETANGULO: %.3f\n",A*B);
        
        entrada.close();
     
    }
 
}
