// Listing 2.1a: Create a simple function
#include <iostream>

void func()
{
    std::cout << "\nSTEP II : Now inside the func() function\n";
}

int main()
{
    std::cout << "\nSTEP I  : Inside the main() function\n";

    func();

    std::cout << "\nSTEP III: Back the main() function again\n\n";

    return 0;
}