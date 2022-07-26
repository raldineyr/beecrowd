import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        int I, J;

       for (I = 1; I <= 9; I += 2) {
          for (J = 7; J >= 5; J--) {
            System.out.printf("I=%d J=%d\n", I, J);
        }
      } 
   }
}
