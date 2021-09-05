using System; 

class URI {

    static void Main(string[] args) { 
        
        string vendedor = Console.ReadLine();
        
        double salario = double.Parse(Console.ReadLine());
        double vendas = double.Parse(Console.ReadLine());
        double totalReceber = (vendas * 0.15) + salario;
        
        Console.Write("TOTAL = R$ {0:F2}\n",totalReceber);
    }

}
