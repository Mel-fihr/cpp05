#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    std::cout << "=== Test 1: Valid Form ===" << std::endl;
    try {
        Form form1("Tax Form", 50, 25);
        std::cout << form1 << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 2: Form Grade Too High ===" << std::endl;
    try {
        Form form2("Invalid Form", 0, 25);
        std::cout << form2 << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 3: Form Grade Too Low ===" << std::endl;
    try {
        Form form3("Invalid Form", 50, 151);
        std::cout << form3 << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: Successful Signing ===" << std::endl;
    try {
        Bureaucrat bob("Bob", 30);
        Form form4("Contract", 50, 25);
        std::cout << bob << std::endl;
        std::cout << form4 << std::endl;
        bob.signForm(form4);
        std::cout << form4 << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 5: Failed Signing - Grade Too Low ===" << std::endl;
    try {
        Bureaucrat john("John", 100);
        Form form5("Important Document", 50, 25);
        std::cout << john << std::endl;
        std::cout << form5 << std::endl;
        john.signForm(form5);
        std::cout << form5 << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}