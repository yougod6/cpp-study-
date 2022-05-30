#include <iostream>
constexpr int ABCD = 2; //C++ 17 ~

int main()
{
    if constexpr(ABCD)
        std::cout << "1: yes\n";
    else
        std::cout<<"1: no\n";
}