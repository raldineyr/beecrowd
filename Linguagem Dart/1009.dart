import 'dart:io';

void main()
{
    String nomeVendedor = stdin.readLineSync();
    double salarioFixo = double.parse(stdin.readLineSync());
    double totalDeVendas = double.parse(stdin.readLineSync());
    
    double total = salarioFixo + (0.15 * totalDeVendas);
    
    print("TOTAL = R\$ ${total.toStringAsFixed(2)}");
}
