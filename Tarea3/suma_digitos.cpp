#include <iostream>

int suma_digitos(int n) {
    if (n == 0) return 0; // Caso base
    return (n % 10) + suma_digitos(n / 10); // Suma el último dígito y llama al resto
}

int main() {
    int n;
    if (std::cin >> n) {
        std::cout << suma_digitos(n) << std::endl;
    }
    return 0;
}