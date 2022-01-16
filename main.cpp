#include <iostream>
#include <string>

int main ()
{ string str; do { std::cout << "John Doe: "; getline (cin,str); std::cout << "Builderman: " << str << '\n'; } while (str != "goodbye");
}
