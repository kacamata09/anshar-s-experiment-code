package main
import "fmt"

func swap(x int, y int) {
	var temp int = x
    x = y
    y = temp
}

func main() {
	var x int = 1000
	var y int = 20

	// sama juga gak bisa
	swap(x, y)

	fmt.Println(x)
	fmt.Println(y)

}