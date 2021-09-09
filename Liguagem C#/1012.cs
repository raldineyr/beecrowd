using System; 

class URI {

    static void Main(string[] args) { 
  string[] line = Console.ReadLine().Split(' ');
        double A = double.Parse(line[0]);
        double B = double.Parse(line[1]);
        double C = double.Parse(line[2]);
        
        double triangulo = A*C/2;
        double circulo = C*C*3.14159;
        double trapezio = ((A+B)*C) /2;
        double quadrado = B*B;
        double retangulo = B*A;
        
        Console.WriteLine("TRIANGULO: {0:F3}",triangulo);
        Console.WriteLine("CIRCULO: {0:F3}",circulo);
        Console.WriteLine("TRAPEZIO: {0:F3}",trapezio);
        Console.WriteLine("QUADRADO: {0:F3}",quadrado);
        Console.WriteLine("RETANGULO: {0:F3}",retangulo);
        
    }

}
