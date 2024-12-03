#include <iostream>
#include <math.h>

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
struct Persona {
    std::string nombre;
    unsigned int edad;
    float estatura;
    float peso;
    float imc;
    std::string fecha;
};
void ingresarDatosPersonales(Persona& unaPersona) {
    std::cin.ignore();
    std::cout << "Ingrese el nombre de la persona: ";
    std::getline(std::cin, unaPersona.nombre);
    std::cout << "Ingrese la edad de la persona: ";
    std::cin >> unaPersona.edad;
    std::cout << "Ingrese la estatura de la persona (en metros): ";
    std::cin >> unaPersona.estatura;
    std::cout << "Ingrese el peso de la persona (en kg): ";
    std::cin >> unaPersona.peso;
    std::cout << "Datos ingresados correctamente!" << std::endl;
    return;
}
void registrarPesoPersona(Persona& unaPersona) {
    std::cin.ignore();
    std::cout << "Ingrese el peso de la persona (en kg): ";
    std::cin >> unaPersona.peso;
    std::cin.ignore();
    std::cout << "Ingrese la fecha del peso: ";
    std::getline(std::cin, unaPersona.fecha);
    std::cout << "Datos ingresados correctamente!" << std::endl;
    return;
}
void calcularIMCPersona(Persona& unaPersona) {
    // Formula basica para calcular el IMC: peso / altura^2
    float imc = unaPersona.peso / pow(unaPersona.estatura, 2);
    std::cout << "El IMC de la persona es: " << imc << std::endl;
    if(imc < 18.5f) {
        std::cout << "La persona titne un peso insuficiente" << std::endl;
    }
    if(imc > 18.4f && imc < 25.0f) {
        std::cout << "La persona tiene un peso normal" << std::endl;
    }
    if(imc > 24.9f && imc < 30.0f) {
        std::cout << "La persona tiene sobrepeso" << std::endl;
    }
    if(imc > 29.9f && imc < 40.0f) {
        std::cout << "La persona tiene obesidad" << std::endl;
    }
    if(imc > 39.9f) {
        std::cout << "La persona tiene obesidad morbida" << std::endl;
    }
    return;
}
int main() {
    char eleccion;
    bool salir = false;
    Persona unaPersona;
    while(!salir) {
        eleccion = 0;
        std::cout << "Lista de operaciones:" << std::endl
        << "1 - Registrar datos de la persona" << std::endl
        << "2 - Registrar peso con fecha" << std::endl
        << "3 - Mostrar IMC y clasificacion" << std::endl
        << "4 - Salir del programa" << std::endl;
        std::cout << "Escoja una opcion: ";
        std::cin >> eleccion;
        switch(eleccion) {
        case '1':
            limpiarPantalla();
            ingresarDatosPersonales(unaPersona);
            pausarPrograma();
            limpiarPantalla();
            break;
        case '2':
            limpiarPantalla();
            registrarPesoPersona(unaPersona);
            pausarPrograma();
            limpiarPantalla();
            break;
        case '3':
            limpiarPantalla();
            calcularIMCPersona(unaPersona);
            pausarPrograma();
            limpiarPantalla();
            break;
        case '4':
            salir = true;
            break;
        default:
            std::cout << "[ERROR] Opcion invalida, por favor intentelo nuevamente." << std::endl;
            break;
        }
    }
}
