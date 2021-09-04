using System; 

class URI {

    static void Main(string[] args) { 
        
    int numeroFuncionario = int.Parse(Console.ReadLine());
    double horasTrabalhada = double.Parse(Console.ReadLine());
    double valorHoraTrabalhada = double.Parse(Console.ReadLine());
    
    double salario = horasTrabalhada * valorHoraTrabalhada;
    
    Console.Write("NUMBER = {0}\n",numeroFuncionario);
    Console.Write("SALARY = U$ {0:F2}\n",salario);

    

    }

}
