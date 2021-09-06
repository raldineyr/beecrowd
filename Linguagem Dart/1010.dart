import 'dart:io';

void main()
{   

    List<String> linha1 = stdin.readLineSync().split(" ");
    
    int codigoPeca1 = int.parse(linha1[0]);
    int numeroPeca1 = int.parse(linha1[1]);
    double valorPeca1 = double.parse(linha1[2]);
    
    List<String> linha2 = stdin.readLineSync().split(" ");
    
    int codigoPeca2 = int.parse(linha2[0]);
    int numeroPeca2 = int.parse(linha2[1]);
    double valorPeca2 = double.parse(linha2[2]);
    
    double valorTotal = (numeroPeca1 * valorPeca1) + (numeroPeca2 * valorPeca2);
    
    print("VALOR A PAGAR: R\$ ${valorTotal.toStringAsFixed(2)}");
    
}
