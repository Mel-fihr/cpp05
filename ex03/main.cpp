#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main() {
    Intern someRandomIntern;
    Bureaucrat boss("Boss", 1);

    std::cout << "=== Test 1: Create Robotomy Request ===" << std::endl;
    {
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        if (rrf) {
            std::cout << *rrf << std::endl;
            boss.signForm(*rrf);
            boss.executeForm(*rrf);
            delete rrf;
        }
    }

    std::cout << "\n=== Test 2: Create Shrubbery Creation ===" << std::endl;
    {
        AForm* scf;
        scf = someRandomIntern.makeForm("shrubbery creation", "garden");
        if (scf) {
            std::cout << *scf << std::endl;
            boss.signForm(*scf);
            boss.executeForm(*scf);
            delete scf;
        }
    }

    std::cout << "\n=== Test 3: Create Presidential Pardon ===" << std::endl;
    {
        AForm* ppf;
        ppf = someRandomIntern.makeForm("presidential pardon", "Arthur");
        if (ppf) {
            std::cout << *ppf << std::endl;
            boss.signForm(*ppf);
            boss.executeForm(*ppf);
            delete ppf;
        }
    }

    std::cout << "\n=== Test 4: Invalid Form Name ===" << std::endl;
    {
        AForm* invalid;
        invalid = someRandomIntern.makeForm("invalid form", "target");
        if (invalid) {
            delete invalid;
        }
    }

    std::cout << "\n=== Test 5: Multiple Forms ===" << std::endl;
    {
        AForm* form1 = someRandomIntern.makeForm("robotomy request", "R2D2");
        AForm* form2 = someRandomIntern.makeForm("shrubbery creation", "park");
        
        if (form1) {
            boss.signForm(*form1);
            boss.executeForm(*form1);
            delete form1;
        }
        
        if (form2) {
            boss.signForm(*form2);
            boss.executeForm(*form2);
            delete form2;
        }
    }

    return 0;
}