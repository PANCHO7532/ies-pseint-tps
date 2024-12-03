#include <iostream>

int main() {
    int cantidadDeCaracteres = 10;
    int cantidadADesplazar = 4;
    char caracteres[cantidadDeCaracteres] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char caracteresDesplazados[cantidadDeCaracteres];
    for(int a = 0, b = cantidadADesplazar, c = 1; a < cantidadDeCaracteres; a++, b++) {
        if(b >= cantidadDeCaracteres) {
            b = b - cantidadDeCaracteres;
        }
        caracteresDesplazados[a] = caracteres[b];
    }
    for(int c = 0; c < cantidadDeCaracteres; c++) {
        std::cout << caracteresDesplazados[c] << std::endl;
    }
}
