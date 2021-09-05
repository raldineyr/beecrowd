package main
 
import (
    "fmt"
)
 
func main() {
    
    var nomeVendedor string
    var salarioFixo, totalVendas, salarioLiquido float64
    
    fmt.Scanf("%s",&nomeVendedor)
    fmt.Scanf("%f",&salarioFixo)
    fmt.Scanf("%f",&totalVendas)
    
    salarioLiquido = salarioFixo + totalVendas * 0.15
    fmt.Printf("TOTAL = R$ %.2f\n",salarioLiquido)
    
}
