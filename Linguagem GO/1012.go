package main
 
import (
    "fmt"
)
 
func main() {
    var A, B, C, triangulo, circulo, trapezio, quadrado, retangulo float64
    
    fmt.Scanf("%f",&A)
    fmt.Scanf("%f",&B)
    fmt.Scanf("%f",&C)
    
    triangulo = A * C / 2.0
    circulo = 3.14159*(C*C)
    trapezio = ((A + B) * C) / 2.0
    quadrado = B * B
    retangulo = A * B
    
    fmt.Printf("TRIANGULO: %.3f\n",triangulo)
    fmt.Printf("CIRCULO: %.3f\n",circulo)
    fmt.Printf("TRAPEZIO: %.3f\n",trapezio)
    fmt.Printf("QUADRADO: %.3f\n",quadrado)
    fmt.Printf("RETANGULO: %.3f\n",retangulo)
}
