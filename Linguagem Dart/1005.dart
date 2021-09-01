import 'dart:io';

void main()
{
    double A = double.parse(stdin.readLineSync());
    double B = double.parse(stdin.readLineSync());
    
    double MEDIA = ((A * 3.5) + (B * 7.5)) / 11;
    
    print("MEDIA = " + MEDIA.toStringAsFixed(5));
}
