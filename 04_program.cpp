#include <iostream>
#include <string>

int main() {
    // Declare variables to store user input
    std::string name;
    int age;
    char character;
    
    // std::cin is used to get input from the user  and std::cout is used to display output to the user
    // The << operator is used to insert values into std::cout
    // The >> operator is used to extract values from std::cin
    
    std::cout << "Enter your name: ";
    std::cin >> name;

    
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter a character: ";
    std::cin >> character;


    std::cout << "Hello, " << name << "! \nYou are " << age << " years old.\n" << "your fav character is "<< character << std::endl;

    return 0; // Indicate that the program ended successfully
}
