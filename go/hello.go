package main

import (
    "bufio"
    "fmt"
    "os"
    "strings"
)

func GetName() string {
    scanner := bufio.NewScanner(os.Stdin)
    for {
        fmt.Print("Enter your name: ");
        scanner.Scan()
        name := strings.TrimSpace(scanner.Text())
        if (name != "") {
            return name
        }
    }
}

func main() {
    fmt.Println("Hello, " + GetName())
}
