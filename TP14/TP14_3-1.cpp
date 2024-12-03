#include <iostream>

int main() {
    int cantidadAlumnos = 0;
    float notaMinima = 0;
    float notaMaxima = 0;
    float notaIngresada = 0;
    float sumaTotalNotas = 0;
    std::cout << "Ingrese cantidad de alumnos: ";
    std::cin >> cantidadAlumnos;
    for(int a = 0; a < cantidadAlumnos; a++) {
        std::cout << "Ingrese nota del estudiante (" << (a+1) << "/" << cantidadAlumnos << "): ";
        std::cin >> notaIngresada;
        if(notaMinima == 0 && a == 0) {
            // Si es el primer numero que ingresamos, asumimos la nota minima siempre.
            notaMinima = notaIngresada;
        }
        if(notaIngresada < notaMinima) {
            notaMinima = notaIngresada;
        }
        if(notaIngresada > notaMaxima) {
            notaMaxima = notaIngresada;
        }
        sumaTotalNotas = sumaTotalNotas + notaIngresada;
    }
    std::cout << "Promedio total de las notas: " << (sumaTotalNotas / cantidadAlumnos) << std::endl;
    std::cout << "Nota minima ingresada: " << notaMinima << std::endl;
    std::cout << "Nota maxima ingresada: " << notaMaxima << std::endl;
    return 0;
}
