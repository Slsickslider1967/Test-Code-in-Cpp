#include <iostream>

int main() {
    int a;
    int b; 
    int c;
    std::cout << "What is the value of a? ";
    std::cin >> a;

    std::cout << "What is the value of b? ";
    std::cin >> b;
    
    c = a + b;
    std::cout << "The value of c is: " << c << std::endl;
    return 0;
}
