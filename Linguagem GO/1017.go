package main
 
import (
    "fmt"
)
 
func main() {
    var hora, quilometro int
    
    fmt.Scan(&hora)
    fmt.Scan(&quilometro)
    
    fmt.Printf("%.3f\n",(float32)(hora*quilometro)/12);
        
}
