#include <iostream>

int main() {
    std::cout << "chislo celoy";
    int a;
    std::cin >> a;
    std::cout << "chislo neceloy";
    float b;
    std::cin >> b;
    std::cout << "bookva";
    char p;
    std::cin >> p;
    std::cout << "1 or 0";
    bool g;
    std::cin >> g;

    std::cout << "summa a+g"<<"\t";
    std::cout << a + b <<"\n";
    std::cout << "raznosti a-g"<<"\t";
    std::cout << a -g <<"\n";
    std::cout << "alfavit"<<"\t";
    std::cout <<(char)(p + g) <<"\n";
    std::cout << "proizvedenie a*b"<<"\t";
    std::cout << a*b <<"\n";
    return 0;
}

