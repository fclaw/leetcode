package main

import "fmt"


func generateSubsets(xs []int) [][]int {}


func main() {
    nums := []int{1, 2, 3} // example set
    subsets := generateSubsets(nums)

    fmt.Println("All subsets:")
    for _, subset := range subsets {
        fmt.Println(subset)
    }
}
