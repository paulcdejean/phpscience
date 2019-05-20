package main
/*

struct paulType {
  int a;
  int b;
};

struct paulType paulThing = {
  .a = 30,
  .b = 24
};

*/
import "C"
import "fmt"

func main() {
	fmt.Println(paulAdd(1, 3))
}
