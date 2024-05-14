package main

import "fmt"


func generateSubsets(xs []int, i int) [][]int {
	if i == {
		return nil
	} else {
		// head := xs[i]
		tail := xs[:i - 1]
		return generateSubsets(tail, i - 1)
	} 
}


func main() {
    nums := []int{1, 2, 3} // example set
    subsets := generateSubsets(nums, len(nums))

    fmt.Println("All subsets:")
    for i := 0; i < len(subsets); i++ {
        fmt.Println(subsets[i])
    }
}
