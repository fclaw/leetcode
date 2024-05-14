#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <optional>

using namespace std;


optional<int> linear_search(const std::vector<int>& arr, int target) {
    optional<int> index = std::nullopt; //  initialisation

    // invariant: the processed sub-array doesn hold the target up to index i
    // maintainence: at each iteration the invariant is maintained until the target matches an element under index i
    // termination: either the target matches an element under index i or the array is processed completely (invariant holds)
    for (int i = 0; i < arr.size(); ++i) {  // Loop through the array
        if (arr[i] == target) {  // Check if the current element matches the target
            index = i;  // If it matches, return the index
            break;
        } else {
            continue;
        }
    }

    return index;
}


// function selectionSort(arr):
//     n = length of arr  // Length of the array
    
//     for i from 0 to n - 2:  // Outer loop from the first element to the second-to-last
//         minIndex = i  // Assume the first element of the unsorted section is the minimum
        
//         // Find the smallest element in the unsorted section
//         for j from i + 1 to n - 1:
//             if arr[j] < arr[minIndex]:  // Find a smaller element
//                 minIndex = j  // Update the index of the smallest element
                
//         // Swap the smallest element with the first element of the unsorted section
//         if minIndex != i:  // Only swap if the smallest element is not already in place
//             swap(arr[i], arr[minIndex])

void selection(int* array) {
    size_t length = sizeof(array) / sizeof(array[0]);
    for (size_t i = 0; i < length; i++)
    {
        size_t minIndex = i;
        for (size_t j = ; i < count; i++)
        {
            /* code */
        }
        
    }
    

}


int main() 
{
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::optional<int> result = linear_search(arr, 3456);

    if (result.has_value()) {  // Check if the optional has a value
        std::cout << "Found: " << result.value() << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}