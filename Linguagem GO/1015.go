package main

import (
	"fmt"
	"math"
)

func main() {
	
	var X1, X2, Y1, Y2, distancia float64

	fmt.Scanf("%f",&X1)
	fmt.Scanf("%f",&Y1)
	fmt.Scanf("%f",&X2)
	fmt.Scanf("%f",&Y2)
	
	distancia = math.Sqrt(math.Pow((X2 - X1), 2) + math.Pow((Y2 - Y1), 2))

	fmt.Printf("%.4f\n",distancia)
}
