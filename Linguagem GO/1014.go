package main
 
import (
    "fmt"
)
 
func main() {
    var X,Y float32
    
    fmt.Scan(&X)
    fmt.Scan(&Y)
    
    fmt.Printf("%.3f km/l\n",X/Y)
}
