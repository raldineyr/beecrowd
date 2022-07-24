import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {

    int I = 1, J = 60;
    int contador;

    System.out.printf("I=%d J=%d\n",I,J);
    
    for(contador = J; J > 0; contador--)
    {
      I +=3;
      J -= 5;
      System.out.printf("I=%d J=%d\n",I,J);
    }

    
    }
 
}
