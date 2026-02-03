#include <iostream>
#include <string>

int main();
int Secondary();

int main()
{
    int a;
    int b; 
    int c;
    std::string Opperation = "";


    std::cout << "What is the value of a? ";
    std::cin >> a;

    std::cout << "What is the value of b? ";
    std::cin >> b;

    std::cout << "What opperation would you like to perform? (+, -, *, /) ";
    std::cin >> Opperation;

    if (Opperation == "+") 
    {
        c = a + b;
    }
    else if (Opperation == "-") 
    {
        c = a - b;
    }
    else if (Opperation == "*") 
    {
        c = a * b;
    }
    else if (Opperation == "/") 
    {
        c = a / b;
    }

    
    std::cout << "The value of c is: " << c << std::endl;
    std::cout << "The opperation performed was: " << Opperation << std::endl;

    Secondary();

    return 0;
}

int Secondary()
{
    int Lists[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 10; i++) 
    {
        std::cout << "List item " << i << " is: " << Lists[i] << std::endl;
    }

    for (int item : Lists) 
    {
        std::cout << "Foreach List item is: " << item << std::endl;
    }

    return 0;
}
