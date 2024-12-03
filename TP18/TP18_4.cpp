#include <iostream>

int main() {
    std::string nombres[10];
    int lengitudNombres[10];
    for(int contador = 0; contador < 10; contador++) {
        std::cout << "Ingrese un nombre (" << (contador+1) << "/10): ";
        std::cin >> nombres[contador];
        lengitudNombres[contador] = nombres[contador].length();
    }
    for(int contador = 0; contador < 10; contador++) {
        std::cout << nombres[contador] << " - " << lengitudNombres[contador] << std::endl;
    }
}
