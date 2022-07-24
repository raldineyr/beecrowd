import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
    Scanner entrada = new Scanner(System.in);
  
    int N = entrada.nextInt();
    float totalCoelho = 0, totalRato = 0, totalSapo = 0;
    
    for(int contador = 1; contador <= N; contador++)
    {
      
      int Quantia = entrada.nextInt();
      char Tipo = entrada.next().charAt(0);

      if(Tipo == 'C') 
      {
        totalCoelho += Quantia;  
      }
      else if(Tipo == 'R')
      {
        totalRato += Quantia;
      }
      else if (Tipo == 'S')
      {
        totalSapo += Quantia;
      }
    }
    
    float totalCobaias = totalCoelho + totalRato + totalSapo;
    
    float percentualCoelho = (totalCoelho * 100) / totalCobaias;
    float percentualRato = (totalRato * 100) / totalCobaias;
    float percentualSapo = (totalSapo * 100) /totalCobaias;
    
    System.out.printf("Total: %.0f cobaias\n", totalCobaias);
    System.out.printf("Total de coelhos: %.0f\n", totalCoelho);
    System.out.printf("Total de ratos: %.0f\n", totalRato);
    System.out.printf("Total de sapos: %.0f\n", totalSapo);

    System.out.printf("Percentual de coelhos: %.2f %%\n", percentualCoelho);
    System.out.printf("Percentual de ratos: %.2f %%\n", percentualRato);
    System.out.printf("Percentual de sapos: %.2f %%\n", percentualSapo);
    
    entrada.close();
 
    }
 
}
