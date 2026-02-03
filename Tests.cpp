#include <iostream>
#include <string>

int main() {
    int a;
    int b; 
    int c;
    std::string StringTest = "Test String Output";


    std::cout << "What is the value of a? ";
    std::cin >> a;

    std::cout << "What is the value of b? ";
    std::cin >> b;
    
    c = a + b;
    std::cout << "The value of c is: " << c << std::endl;

    std::cout << StringTest << std::endl;
    return 0;
}
