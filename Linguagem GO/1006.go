package main

import(
    "fmt"
)
func main(){
    var A, B, C float32
    fmt.Scan(&A,&B,&C)
    A*=2
    B*=3
    C*=5
    fmt.Printf("MEDIA = %.1f\n",(A+B+C)/10)
}
