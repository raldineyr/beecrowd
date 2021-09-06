package main
 
import (
    "fmt"
)
 
func main() {
    
    var codigoPeca1, codigoPeca2  int
    var valorPeca1, numeroPeca1, valorPeca2, numeroPeca2,totalCompra float64
    
    fmt.Scanf("%d",&codigoPeca1)
    fmt.Scanf("%f",&numeroPeca1)
    fmt.Scanf("%f",&valorPeca1)
    
    fmt.Scanf("%d",&codigoPeca2)
    fmt.Scanf("%f",&numeroPeca2)
    fmt.Scanf("%f",&valorPeca2)
    
    totalCompra = (numeroPeca1*valorPeca1) + (numeroPeca2 * valorPeca2)
    
    fmt.Printf("VALOR A PAGAR: R$ %.2f\n",totalCompra)
}
