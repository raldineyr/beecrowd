import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
 Scanner entrada = new Scanner(System.in);

    int N = entrada.nextInt();
    int i = 1;

    while (i <= N) 
    {

      int X = entrada.nextInt();
      int Y = entrada.nextInt();
      int soma = 0;
      
      if (X > Y)
      {
       for(int contador = X-1; contador > Y; contador--)
       {
        if(contador % 2 != 0) soma += contador;
       }
      }
      else if (X < Y)
      {
        for(int contador = X +1; contador < Y; contador++)
        {
          if (contador % 2 != 0) soma += contador;
        }
      }     
      System.out.printf("%d\n",soma);
      i++;
    }
    }
}
