#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "\nC++ programming environment setup successful!\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";

    if (age >= 18) {
        std::cout << "Status: Eligible for gym membership.\n";
    }
    else {
        std::cout << "Status: Not eligible for gym membership.\n";
    }

    return 0;
}
