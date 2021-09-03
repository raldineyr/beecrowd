package main
 
import (
    "fmt"
)
 
func main() {

	var numeroFuncionario int
	var horaTrabalhada, valorHora, salario float64
	
	fmt.Scanf("%d", &numeroFuncionario)
	fmt.Scanf("%f", &horaTrabalhada)
	fmt.Scanf("%f",&valorHora)
	
	salario = horaTrabalhada * valorHora
	
	fmt.Printf("NUMBER = %d\n", numeroFuncionario)
	fmt.Printf("SALARY = U$ %.2f\n", salario)
}
