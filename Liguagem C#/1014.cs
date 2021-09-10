using System; 

class URI {

    static void Main(string[] args) { 
        
        double X = double.Parse(Console.ReadLine());
        double Y = double.Parse(Console.ReadLine());
        
        Console.Write("{0:F3} km/l\n",X/Y);
    }

}
