using System; 

class URI {

    static void Main(string[] args) {
            string[] input;
            input = Console.ReadLine().Split(' ');
        
        int codigoPeca1 = int.Parse(input[0]);
        int numeroPeca1 = int.Parse(input[1]);
        double valorPeca1 = double.Parse(input[2]);
        
            input = Console.ReadLine().Split(' ');
        
        int codigoPeca2 = int.Parse(input[0]);
        int numeroPeca2 = int.Parse(input[1]);
        double valorPeca2 = double.Parse(input[2]);
        
        double totalPagar = (numeroPeca1 * valorPeca1) + (numeroPeca2 * valorPeca2); 
    
        Console.Write("VALOR A PAGAR: R$ {0:F2}\n", totalPagar);
    }
}
