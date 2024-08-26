// cpp-hello-vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Program to calculate the sum of a series of numbers
// Author: John Doe
// Date: August 26, 2024

#include <iostream> // For input and output operations
#include <vector>   // To store the series of numbers
#include <numeric>  // For std::accumulate to calculate the sum

//using namespace std; not the best practice, prefix with std:: instead

// Function prototype for sum calculation
int calculateSum(const std::vector<int>& numbers);

int main()
{
    // default hello
    std::cout << "Hello World!\n";

    // Variables declarations
    std::vector<int> numbers;
    int total_sum = 0;
    int num;

    // Input handling
    std::cout << "Enter numbers (end with 0): ";
    while (std::cin >> num && num != 0) {
        numbers.push_back(num);
    }

    // Error handling: check if input failed
    if (std::cin.fail()) {
        std::cerr << "Input error. Please enter valid numbers." << std::endl;
        return 1;
    }

    // Processing logic: Calculate the sum of the numbers
    total_sum = calculateSum(numbers);

    // Output handling: Display the result
    std::cout << "The sum of the numbers is: " << total_sum << std::endl;

    // Program termination: 0 to indicate successful completion
    return 0;
}

// Function definition to calculate the sum of a vector of numbers
int calculateSum(const std::vector<int>& numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0); // Sum up all elements
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
