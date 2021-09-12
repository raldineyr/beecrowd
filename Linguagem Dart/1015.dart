import 'dart:io';
import 'dart:math';

void main()
{
    List <String> linha1 = stdin.readLineSync().split(" ");
    
    double X1 = double.parse(linha1[0]);
    double Y1 = double.parse(linha1[1]);
    
    List <String> linha2 = stdin.readLineSync().split(" ");
    
    double X2 = double.parse(linha2[0]);
    double Y2 = double.parse(linha2[1]);
    
    double distancia = sqrt(pow((X2 - X1), 2.0) + pow((Y2 - Y1), 2.0));
    
    print(distancia.toStringAsFixed(4));
}
