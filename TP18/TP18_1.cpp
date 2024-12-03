#include <iostream>

int main() {
    std::string apellidos[20];
    for(int contador = 0; contador < 20; contador++) {
        std::cout << "Ingrese un apellido (" << (contador+1) << "/20): ";
        std::cin >> apellidos[contador];
    }
}
