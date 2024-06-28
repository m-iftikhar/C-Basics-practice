#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
    int a = 10;
    int b = 3;

    std::cout << "Addition: " << (a + b) << std::endl;
    std::cout << "Subtraction: " << (a - b) << std::endl;
    std::cout << "Multiplication: " << (a * b) << std::endl;
    std::cout << "Division: " << (a / b) << std::endl;
    std::cout << "Modulus: " << (a % b) << std::endl;
    std::cout << "Modulus: " << (a % b) << std::endl;

    // random value generetor
    std::srand(std::time(0)); // Seed random number generator

    int randomValue = std::rand();
    std::cout << "Random Value: " << randomValue << std::endl;
    std::cout << "Random Value: " << randomValue << std::endl;
    std::cout << "Random Value: " << randomValue << std::endl;

    return 0;
}
