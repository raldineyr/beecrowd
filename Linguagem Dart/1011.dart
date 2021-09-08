import 'dart:io';

void main()
{
    int raio = int.parse(stdin.readLineSync());
    
    double volumeEsfera = (4.0/3.0) * 3.14159 * (raio*raio*raio);
    print("VOLUME = " + volumeEsfera.toStringAsFixed(3));
}
