package main
import "fmt"

func main() {
	this_arr := [5]string {"Memories", "Chiisana", "We Are", "Believe", "Hope"}
	fmt.Println(this_arr)

	arr2 := this_arr[1:4]
	fmt.Println(arr2)

	arr2[0] = "Change"
	fmt.Println(this_arr)

	



	


}