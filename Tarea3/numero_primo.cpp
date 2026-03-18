#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    if (n < 2) { std::cout << "no primo" << std::endl; return 0; }
    if (n == 2) { std::cout << "primo" << std::endl; return 0; }
    if (n % 2 == 0) { std::cout << "no primo" << std::endl; return 0; }

    bool es_primo = true;
    for (int i = 3; i <= std::sqrt(n); i += 2) {
        if (n % i == 0) {
            es_primo = false;
            break;
        }
    }
    if (es_primo) std::cout << "primo" << std::endl;
    else std::cout << "no primo" << std::endl;
    return 0;
}