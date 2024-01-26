package main

import (
	"fmt"
	"time"
)

func main() {
	// Print "Hello, World!" with a fancy border
	fmt.Println("╔══════════════════════════════════════════════════════════════════════════════╗")
	fmt.Println("║                                                                              ║")
	fmt.Println("║                                                                              ║")
	fmt.Println("║                              Hello, World!                                   ║")
	fmt.Println("║                                                                              ║")
	fmt.Println("║                                                                              ║")
	fmt.Println("╚══════════════════════════════════════════════════════════════════════════════╝")

	// Add a delay before exiting
	time.Sleep(3 * time.Second)
}

