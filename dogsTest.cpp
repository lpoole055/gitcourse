#include <iostream>
#include <string> // Library for strings

int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "CHANGE" << std::endl;
    std::cout << "This is my test code for C++." << std::endl;
    std::cout << "Do not forget to compile first before running!" << std::endl;

    int userInput;
    std::cin >> userInput;

    class dog
    {
    public:               // Ensures class can be viewed everywhere in document
        std::string name; // String is included from standard libraries
        int age;
    };

    dog myDog; // Object of class dog
    myDog.name = "Clover";
    myDog.age = 14;

    dog brotherDog; // Object of class dog
    brotherDog.name = "Stella";
    brotherDog.age = 1;

    // Clover
    std::cout << myDog.name;
    std::cout << "\n";
    std::cout << myDog.age;
    std::cout << "\n";

    // Stella
    std::cout << brotherDog.name;
    std::cout << "\n";
    std::cout << brotherDog.age;
    std::cout << "\n";

    return 0;
}