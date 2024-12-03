#include <iostream>

int main() {
    int numeroInicialTabla, numeroFinalTabla, cantidadMultiplicaciones;
    std::cout << "Ingrese un numero inicial: ";
    std::cin >> numeroInicialTabla;
    std::cout << "Ingrese un numero final: ";
    std::cin >> numeroFinalTabla;
    std::cout << "Se generaran las tablas de multiplicar desde el " << numeroInicialTabla << " hasta el " << numeroFinalTabla << std::endl;
    std::cout << "Indique el numero de multiplicaciones a realizar por cada tabla: ";
    std::cin >> cantidadMultiplicaciones;
    for(int a = numeroInicialTabla; a <= numeroFinalTabla; a++) {
        for(int b = 1; b <= cantidadMultiplicaciones; b++) {
            std::cout << a << "*" << b << " = " << (a * b) << std::endl;
        }
    }
}
