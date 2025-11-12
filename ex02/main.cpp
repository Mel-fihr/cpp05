#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    std::cout << "=== Test 1: ShrubberyCreationForm ===" << std::endl;
    try {
        Bureaucrat bob("Bob", 130);
        ShrubberyCreationForm shrub("home");
        
        std::cout << bob << std::endl;
        std::cout << shrub << std::endl;
        
        bob.signForm(shrub);
        bob.executeForm(shrub);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 2: RobotomyRequestForm ===" << std::endl;
    try {
        Bureaucrat alice("Alice", 40);
        RobotomyRequestForm robotomy("Bender");
        
        std::cout << alice << std::endl;
        std::cout << robotomy << std::endl;
        
        alice.signForm(robotomy);
        alice.executeForm(robotomy);
        alice.executeForm(robotomy);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 3: PresidentialPardonForm ===" << std::endl;
    try {
        Bureaucrat john("John", 1);
        PresidentialPardonForm pardon("Arthur Dent");
        
        std::cout << john << std::endl;
        std::cout << pardon << std::endl;
        
        john.signForm(pardon);
        john.executeForm(pardon);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: Form Not Signed ===" << std::endl;
    try {
        Bureaucrat charlie("Charlie", 1);
        ShrubberyCreationForm unsignedForm("garden");
        
        charlie.executeForm(unsignedForm);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 5: Grade Too Low to Execute ===" << std::endl;
    try {
        Bureaucrat david("David", 100);
        Bureaucrat eve("Eve", 1);
        RobotomyRequestForm robotomy2("Marvin");
        
        eve.signForm(robotomy2);
        david.executeForm(robotomy2);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}