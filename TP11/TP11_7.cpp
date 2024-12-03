#include <iostream>

int main() {
    int cantidadTotalVentas, cantidadVentasElectronica, cantidadVentasRopa, cantidadVentasAlimento;
    std::cout << "Ingrese la cantidad total de ventas: ";
    std::cin >> cantidadTotalVentas;
    std::cout << "Ingrese la cantidad de ventas de electronica: ";
    std::cin >> cantidadVentasElectronica;
    std::cout << "Ingrese la cantidad de ventas de ropa: ";
    std::cin >> cantidadVentasRopa;
    std::cout << "Ingrese la cantidad de ventas de alimento: ";
    std::cin >> cantidadVentasAlimento;
    std::cout << "Porcentaje de ventas de electronica: " << (cantidadVentasElectronica * 100) / cantidadTotalVentas << "%" << std::endl;
    std::cout << "Porcentaje de ventas de ropa: " << (cantidadVentasRopa * 100) / cantidadTotalVentas << "%" << std::endl;
    std::cout << "Porcentaje de ventas de alimento: " << (cantidadVentasAlimento * 100) / cantidadTotalVentas << "%" << std::endl;
    return 0;
}
