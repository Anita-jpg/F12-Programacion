#include <iostream>
#include <string>

int main() {
    std::string palabra;
    std::cin >> palabra;
    int contador = 0;
    for (char c : palabra) {
        char minuscula = std::tolower(c);
        if (minuscula == 'a' || minuscula == 'e' || minuscula == 'i' || minuscula == 'o' || minuscula == 'u') {
            contador++;
        }
    }
    std::cout << contador << std::endl;
    return 0;
}