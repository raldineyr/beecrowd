import 'dart:io';

void main()
{
    double A = double.parse(stdin.readLineSync());
    double B = double.parse(stdin.readLineSync());
    double C = double.parse(stdin.readLineSync());
    
    double MEDIA = ((A * 2)+(B * 3)+(C * 5)) / 10;
    print("MEDIA = " + MEDIA.toStringAsFixed(1));
}
