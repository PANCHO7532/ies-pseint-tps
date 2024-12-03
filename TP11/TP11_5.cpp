#include <iostream>

int main() {
    int cantidadNinos, cantidadNinas, totalAula;
    std::cout << "Ingrese la cantidad de niños en el aula: ";
    std::cin >> cantidadNinos;
    std::cout << "Ingrese la cantidad de niñas en el aula: ";
    std::cin >> cantidadNinas;
    totalAula = cantidadNinos + cantidadNinas;
    std::cout << "Porcentaje de niños: " << (cantidadNinos * 100) / totalAula << "%" << std::endl;
    std::cout << "Porcentaje de niñas: " << (cantidadNinas * 100) / totalAula << "%" << std::endl;
    return 0;
}
