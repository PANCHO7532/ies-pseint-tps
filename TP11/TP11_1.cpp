#include <iostream>

int main() {
    int valorHoraTrabajada = 0;
    std::cout << "Ingrese valor de la hora trabajada: ";
    std::cin >> valorHoraTrabajada;
    std::cout << "Valor sueldo semanal: " << (valorHoraTrabajada * 8) * 5;
    return 0;
}
