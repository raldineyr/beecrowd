using System; 

class URI {

    static void Main(string[] args) { 
    
    double A = double.Parse(Console.ReadLine());
    double B = double.Parse(Console.ReadLine());
    double M = ((A*3.5)+(B*7.5))/11;
    Console.Write("MEDIA = {0:F5}\n",M);
    
    }

}
