using System; 

class URI {

    static void Main(string[] args) { 
    
    int raio = int.Parse(Console.ReadLine());
    double pi = 3.14159;
    double volumeEsfera = (4.0/3) * pi * Math.Pow(raio,3.0);
    Console.WriteLine("VOLUME = {0:F3}",volumeEsfera);
 
    }
}
