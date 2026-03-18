#include <iostream>
#include <vector>

// Esta es tu función (la lógica)
int busqueda_dos_en_dos(std::vector<int> lista, int n, int objetivo) {
    int i = 0;
    while (i < n && lista[i] < objetivo) {
        i = i + 2;
    }
    if (i < n && lista[i] == objetivo) {
        return i;
    } else {
        return -1;
    }
}

// AQUÍ VA EL MAIN (donde el programa empieza a correr)
int main() {
    std::vector<int> datos = {2, 4, 6, 8, 10, 12}; // Una lista de ejemplo
    int n = datos.size();
    int buscar = 8;
    
    int resultado = busqueda_dos_en_dos(datos, n, buscar);
    
    if (resultado != -1) {
        std::cout << "Objetivo encontrado en el indice: " << resultado << std::endl;
    } else {
        std::cout << "Objetivo no encontrado." << std::endl;
    }
    
    return 0;
}