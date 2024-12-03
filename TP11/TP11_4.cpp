#include <iostream>
#include <math.h>

int main() {
    float unNumero;
    std::cout << "Ingrese un numero: ";
    std::cin >> unNumero;
    std::cout << "La raiz cuadrada de " << unNumero << " es: " << sqrt(unNumero) << std::endl;
    std::cout << "El cuadrado de " << unNumero << " es: " << pow(unNumero, 2) << std::endl;
    return 0;
}
