import 'dart:io';

void main()
{
    double A = double.parse(stdin.readLineSync());
    double B = 3.14159 * (A * A);
    print("A=" + B.toStringAsFixed(4));
}
