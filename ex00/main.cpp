#include "Bureaucrat.hpp"

int main() {
    std::cout << "=== Test 1: Valid Bureaucrat ===" << std::endl;
    try {
        Bureaucrat bob("Bob", 75);
        std::cout << bob << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 2: Grade Too High ===" << std::endl;
    try {
        Bureaucrat john("John", 0);
        std::cout << john << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 3: Grade Too Low ===" << std::endl;
    try {
        Bureaucrat jane("Jane", 151);
        std::cout << jane << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: Increment Grade ===" << std::endl;
    try {
        Bureaucrat alice("Alice", 2);
        std::cout << alice << std::endl;
        alice.incrementGrade();
        std::cout << alice << std::endl;
        alice.incrementGrade();
        std::cout << alice << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 5: Decrement Grade ===" << std::endl;
    try {
        Bureaucrat charlie("Charlie", 149);
        std::cout << charlie << std::endl;
        charlie.decrementGrade();
        std::cout << charlie << std::endl;
        charlie.decrementGrade();
        std::cout << charlie << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}