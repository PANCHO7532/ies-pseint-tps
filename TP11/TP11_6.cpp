#include <iostream>
#include <math.h>
#ifndef M_PIf
#define M_PIf 3.14159f
#endif

int main() {
    float radio, altura, volumen;
    std::cout << "Ingrese el radio de la base del cono: ";
    std::cin >> radio;
    std::cout << "Ingrese la altura del cono: ";
    std::cin >> altura;
    volumen = (1.0f / 3.0f) * M_PIf * pow(radio, 2) * altura;
    std::cout << "El volumen del cono es: " << volumen;
    return 0;
}
