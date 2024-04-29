/*  Programmer:Hamza Sheikh
	Date:9/02/24
	Description: find the subset of an array
	*/

#include <iostream>

bool hasSubsetSum(int arr[], int size, int targetSum, int subset[], int subsetSize, int currentSum) {
    if (currentSum == targetSum) {
        std::cout << "Subset: ";
        for (int i = 0; i < subsetSize; i++) {
            std::cout << subset[i] << " ";
        }
        std::cout << "\n";
        return true;  
    }

    if (size == 0) {
        return false;  
    }

    
    return hasSubsetSum(arr, size - 1, targetSum, subset, subsetSize, currentSum) ||
           hasSubsetSum(arr, size - 1, targetSum, subset, subsetSize + 1, currentSum + arr[size - 1]);
}

int main() {
    int arr[] = {4, 5, 2, 3, 6, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 9;
    int subset[size];

    std::cout << "Subset with sum " << targetSum << " exists: " << hasSubsetSum(arr, size, targetSum, subset, 0, 0) << "\n";

    return 0;
}

