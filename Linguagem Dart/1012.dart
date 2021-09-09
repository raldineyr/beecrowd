import 'dart:io';

void main()
{
    List <String> linha = stdin.readLineSync().split(" ");
    
    double A = double.parse(linha[0]);
    double B = double.parse(linha[1]);
    double C = double.parse(linha[2]);
    
    double trianguloR = (A * C) / 2;
    double circulo = (C*C)*3.14159;
    double trapezio = ((A + B) * C) / 2;
    double quadrado = B * B; 
    double retangulo = A * B;
    
    print("TRIANGULO: ${trianguloR.toStringAsFixed(3)}");
    print("CIRCULO: ${circulo.toStringAsFixed(3)}");
    print("TRAPEZIO: ${trapezio.toStringAsFixed(3)}");
    print("QUADRADO: ${quadrado.toStringAsFixed(3)}");
    print("RETANGULO: ${retangulo.toStringAsFixed(3)}");
}
