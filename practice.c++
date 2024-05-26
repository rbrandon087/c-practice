#include <iostream>

int main()
{

    std::cout << "Enter an integer:";

    int num{};       // define variable num as an integer variable
    std::cin >> num; // std::cin uses operator >>, not operator <<!

    std::cout << "Double that number is:" << num * 2 << '\n'; // use an expression to multiply num * 2 at the point where we are going to print it

    return 0;
}