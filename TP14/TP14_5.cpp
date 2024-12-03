#include <iostream>
#include <math.h>

#ifndef M_PIf
// En algunos compiladores, "PI" (o M_PIf para un valor de PI decimal) no está definido con este nombre.
// Con esto nos aseguramos que siempre esté definido a toda costa.
#define M_PIf 3.14159f
#endif
void limpiarPantalla() {
    // Dependiendo del sistema operativo estos comandos de limpieza son distintos entre si
    // Con esto nos aseguramos que siempre funcione independiente del sistema operativo.
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
void pausarPrograma() {
#ifdef _WIN32
    system("pause");
#else
    // No es de las formas mas eficientes para pausar un programa en linux, pero sirve su proposito
    std::cout << "Presione la tecla ENTER para continuar...";
    std::cin.ignore();
    std::cin.get();
#endif
}
float calcularAreaCirculo(float radio) {
    return (M_PIf * pow(radio, 2));
}
float calcularPerimetroCirculo(float radio) {
    return (2 * M_PIf * radio);
}
float calcularAreaTriangulo(float base, float altura) {
    return ((base * altura) / 2);
}
float calcularPerimetroTriangulo(float ladoA, float ladoB, float ladoC) {
    return (ladoA + ladoB + ladoC);
}
float calcularAreaRectangulo(float base, float altura) {
    return (base * altura);
}
float calcularPerimetroRectangulo(float ladoA, float ladoB) {
    return ((2 * ladoA) + (2 * ladoB));
}
int main() {
    char eleccion;
    bool salir = false;
    // Estas generalmente son la cantidad de variables que posiblemente usaremos durante el programa
    float aux1, aux2, aux3;
    limpiarPantalla();
    while(!salir) {
        // "Reseteamos" las variables a 0 para evitar elecciones accidentales.
        eleccion = 0; aux1 = 0; aux2 = 0; aux3 = 0;
        std::cout << "Lista de operaciones" << std::endl
        << "1 - Calcular area de un circulo" << std::endl
        << "2 - Calcular perimetro de un circulo" << std::endl
        << "3 - Calcular area de un triangulo" << std::endl
        << "4 - Calcular perimetro de un triangulo" << std::endl
        << "5 - Calcular area de un rectangulo" << std::endl
        << "6 - Calcular perimetro de un rectangulo" << std::endl
        << "7 - Salir del programa" << std::endl;
        std::cout << "Escoja una opcion: ";
        std::cin >> eleccion;
        switch(eleccion) {
        case '1':
            std::cout << "Ingrese el radio del circulo: ";
            std::cin >> aux1;
            std::cout << "El area del circulo es: " << calcularAreaCirculo(aux1) << std::endl;
            pausarPrograma();
            limpiarPantalla();
            break;
        case '2':
            std::cout << "Ingrese el radio del circulo: ";
            std::cin >> aux1;
            std::cout << "El perimetro del circulo es: " << calcularPerimetroCirculo(aux1) << std::endl;
            pausarPrograma();
            limpiarPantalla();
            break;
        case '3':
            std::cout << "Ingrese la base del triangulo: ";
            std::cin >> aux1;
            std::cout << "Ingrese la altura del triangulo: ";
            std::cin >> aux2;
            std::cout << "El area del triangulo es: " << calcularAreaTriangulo(aux1, aux2) << std::endl;
            pausarPrograma();
            limpiarPantalla();
            break;
        case '4':
            std::cout << "Ingrese el lado A del triangulo: ";
            std::cin >> aux1;
            std::cout << "Ingrese el lado B del triangulo: ";
            std::cin >> aux2;
            std::cout << "Ingrese el lado C del triangulo: ";
            std::cin >> aux3;
            std::cout << "El perimetro del triangulo es: " << calcularPerimetroTriangulo(aux1, aux2, aux3) << std::endl;
            pausarPrograma();
            limpiarPantalla();
            break;
        case '5':
            std::cout << "Ingrese la base del rectangulo: ";
            std::cin >> aux1;
            std::cout << "Ingrese la altura del rectangulo: ";
            std::cin >> aux2;
            std::cout << "El area del rectangulo es: " << calcularAreaRectangulo(aux1, aux2) << std::endl;
            pausarPrograma();
            limpiarPantalla();
            break;
        case '6':
            std::cout << "Ingrese el lado A del rectangulo: ";
            std::cin >> aux1;
            std::cout << "Ingrese el lado B del rectangulo: ";
            std::cin >> aux2;
            std::cout << "El perimetro del rectangulo es: " << calcularPerimetroRectangulo(aux1, aux2) << std::endl;
            pausarPrograma();
            limpiarPantalla();
            break;
        case '7':
            salir = true;
            break;
        default:
            std::cout << "[ERROR] Opcion invalida, por favor intentelo nuevamente." << std::endl;
            break;
        }
    }
    return 0;
}
