#include <iostream>

struct Prestamo {
    std::string nombre;
    std::string apellido;
    std::string tituloLibro;
    std::string fechaEntrega;
};
void registrarNuevoPrestamo(Prestamo prestamos[], int pos) {
    Prestamo prestamo;
    std::cout << "Ingrese el nombre (" << (pos+1) << "): ";
    std::cin >> prestamo.nombre;
    std::cout << "Ingrese el apellido (" << (pos+1) << "): ";
    std::cin >> prestamo.apellido;
    std::cout << "Ingrese el titulo del libro (" << (pos+1) << "): ";
    std::cin >> prestamo.tituloLibro;
    std::cout << "Ingrese la fecha de entrega del libro (" << (pos+1) << "): ";
    std::cin >> prestamo.fechaEntrega;
    prestamos[pos] = prestamo;
    return;
}
void mostrarPrestamos(const Prestamo prestamos[], int tam) {
    std::cout << std::endl;
    for(int a = 0; a < tam; a++) {
        std::cout << "Nombre: " << prestamos[a].nombre << std::endl
        << "Apellido: " << prestamos[a].apellido << std::endl
        << "Titulo del libro: " << prestamos[a].tituloLibro << std::endl
        << "Fecha de entrega: " << prestamos[a].fechaEntrega << std::endl
        << std::endl;
    }
    return;
}
int main() {
    Prestamo prestamos[5];
    for(int a = 0; a < 5; a++) {
        registrarNuevoPrestamo(prestamos, a);
    }
    mostrarPrestamos(prestamos, 5);
    return 0;
}
