#include <iostream>

float calcularPromedio(float nota1, float nota2, float nota3, float nota4) {
    return (nota1 + nota2 + nota3 + nota4) / 4;
}
float calcularNotaMaxima(float nota1, float nota2, float nota3, float nota4) {
    int notaMaxima = nota1;
    if(nota2 > notaMaxima) {
        notaMaxima = nota2;
    }
    if(nota3 > notaMaxima) {
        notaMaxima = nota3;
    }
    if(nota4 > notaMaxima) {
        notaMaxima = nota4;
    }
    return notaMaxima;
}
int main() {
    int codigo;
    float nota1, nota2, nota3, nota4;
    std::cout << "Ingrese codigo: ";
    std::cin >> codigo;
    std::cout << "Ingrese primera nota: ";
    std::cin >> nota1;
    std::cout << "Ingrese segunda nota: ";
    std::cin >> nota2;
    std::cout << "Ingrese tercera nota: ";
    std::cin >> nota3;
    std::cout << "Ingrese cuarta nota: ";
    std::cin >> nota4;
    std::cout << "Codigo: " << codigo << std::endl;
    std::cout << "El promedio de las notas es: " << calcularPromedio(nota1, nota2, nota3, nota4) << std::endl;
    std::cout << "La nota maxima ingresada es: " << calcularNotaMaxima(nota1, nota2, nota3, nota4) << std::endl;
    return 0;
}
