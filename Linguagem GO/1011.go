package main
 
import (
    "fmt"
)
 
func main() {
    
    var raio,volume float64
    fmt.Scanf("%f",&raio)
    
    volume = (4/3.0) * 3.14159 * (raio*raio*raio)
    
    fmt.Printf("VOLUME = %.3f\n",volume)
        
}
