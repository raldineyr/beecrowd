using System; 

class URI {

    static void Main(string[] args) { 
        
        int hora = int.Parse(Console.ReadLine());
        int quilometro = int.Parse(Console.ReadLine());
        
        Console.Write("{0:F3}\n",(double)(quilometro*hora)/12);

        
    }

}
