#include <iostream>

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
struct CuentaBancaria {
    int numeroCuenta;
    std::string nombreTitular;
    float saldo;
};
int main() {
    char eleccion;
    float aux;
    bool salir = false;
    CuentaBancaria cuenta;
    cuenta.numeroCuenta = 0000001;
    cuenta.nombreTitular = "Juan Diaz";
    cuenta.saldo = 157328.0f;
    limpiarPantalla();
    while(!salir) {
        eleccion = 0, aux = 0;
        std::cout << "Bienvenido " << cuenta.nombreTitular << "!" << std::endl
        << "1 - Consultar saldo" << std::endl
        << "2 - Retirar dinero" << std::endl
        << "3 - Depositar dinero" << std::endl
        << "4 - Salir" << std::endl
        << "Escoja una opcion: ";
        std::cin >> eleccion;
        switch(eleccion) {
        case '1':
            limpiarPantalla();
            std::cout << "Tu saldo es: $" << cuenta.saldo << std::endl;
            pausarPrograma();
            limpiarPantalla();
            break;
        case '2':
            limpiarPantalla();
            std::cout << "Ingrese la cantidad a extraer: ";
            std::cin >> aux;
            if(aux > cuenta.saldo) {
                std::cout << "No tienes suficiente saldo para extraer esa cantidad." << std::endl;
            } else {
                cuenta.saldo = cuenta.saldo - aux;
                std::cout << "Extraccion exitosa!" << std::endl
                << "Tu nuevo saldo es: $" << cuenta.saldo << std::endl;
            }
            pausarPrograma();
            limpiarPantalla();
            break;
        case '3':
            limpiarPantalla();
            std::cout << "Ingrese la cantidad a depositar: ";
            std::cin >> aux;
            cuenta.saldo = cuenta.saldo + aux;
            std::cout << "Deposito exitoso!" << std::endl
            << "Tu nuevo saldo es: $" << cuenta.saldo << std::endl;
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
