package main
import "C"

//export paulAdd
func paulAdd(a, b int) int {
	return a + b
}
