package main

import "fmt"


func generateSubsets(xs []int, i int) [][]int {
	if xs == nil {
		return xs
	} else {
		
	}
	x := xs[]
	return nil
}


func main() {
    nums := []int{1, 2, 3} // example set
    subsets := generateSubsets(nums, 0)

    fmt.Println("All subsets:")
    for i := 0; i < len(subsets); i++ {
        fmt.Println(subsets[i])
    }
}
