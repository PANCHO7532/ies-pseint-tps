#include <iostream>

int main() {
    int promedio = 0;
    int aux = 0;
    for(int a = 0; a < 5; a++) {
        std::cout << "Ingrese calificacion (" << (a+1) << "/5): ";
        std::cin >> aux;
        promedio = promedio + aux;
    }
    std::cout << "El promedio de las calificaciones es: " << (promedio / 5);
    return 0;
}
