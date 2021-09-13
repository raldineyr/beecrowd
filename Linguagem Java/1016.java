import java.io.IOException;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
    
        Scanner entrada = new Scanner(System.in);
        
        int quilometro = entrada.nextInt();
        System.out.printf("%d minutos\n",(60*quilometro)/30);
    
    }
 
}
