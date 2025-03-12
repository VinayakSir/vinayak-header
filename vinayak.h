#ifndef VINAYAK_H
#define VINAYAK_H

#include <iostream>
#include <vector>

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function to print a vector
void printVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Function to calculate factorial
long long factorial(int n) {
    if (n < 0) return -1; // Return -1 for invalid input
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

#endif // VINAYAK_H
