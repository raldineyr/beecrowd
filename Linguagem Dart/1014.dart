import 'dart:io';

void main()
{
 
    
    int quilometro = int.parse(stdin.readLineSync());
    double litros = double.parse(stdin.readLineSync());
    
    double consumoMedio = quilometro / litros;
    
    print("${consumoMedio.toStringAsFixed(3)} km/l");


}
