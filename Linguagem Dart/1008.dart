import 'dart:io';

void main()
{
    int numeroFuncionario = int.parse(stdin.readLineSync());
    double horaTrabalhada = double.parse(stdin.readLineSync());
    double valorHoraTrabalhada = double.parse(stdin.readLineSync());
    
    double Salario = horaTrabalhada * valorHoraTrabalhada;
    
    print("NUMBER = $numeroFuncionario");
    print("SALARY = U\$ " + Salario.toStringAsFixed(2));
}
