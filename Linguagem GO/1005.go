package main

import(
    "fmt"
)
func main(){
    var A,B float64
    fmt.Scan(&A,&B)
    A *= 3.5
    B *= 7.5
    fmt.Printf("MEDIA = %.5f\n",(A+B)/11)
}
