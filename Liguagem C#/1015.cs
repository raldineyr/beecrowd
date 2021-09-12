using System; 

class URI {

    static void Main(string[] args) { 
    string[] input;
    
    input = Console.ReadLine().Split(' ');
    
    double X1 = double.Parse(input[0]);
    double Y1 = double.Parse(input[1]);
    
    input = Console.ReadLine().Split(' ');
    
    double X2 = double.Parse(input[0]);
    double Y2 = double.Parse(input[1]);
    
    double distancia = ((X2 - X1)*(X2 - X1)) + ((Y2 - Y1)*(Y2 - Y1));
    
    Console.Write("{0:F4}\n",Math.Sqrt(distancia));
    
    }

}
