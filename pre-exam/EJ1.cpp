#include <iostream>

struct Producto {
    std::string nombre;
    float precio;
    int cantidadVendida;
};
void registrarVenta(Producto& producto) {
    std::cout << "Ingrese la cantidad vendida de \"" << producto.nombre << "\": ";
    std::cin >> producto.cantidadVendida;
    return;
}
float calcularTotalVenta(const Producto& producto) {
    return (producto.precio * producto.cantidadVendida);
}
void mostrarReporte(Producto productos[], int tam) {
    std::cout << std::endl;
    for(int a = 0; a < tam; a++) {
        std::cout << "Nombre del producto: " << productos[a].nombre << std::endl
        << "Precio: " << productos[a].precio << std::endl
        << "Cantidad vendida: " << productos[a].cantidadVendida << std::endl
        << "Total de ventas: " << calcularTotalVenta(productos[a]) << std::endl
        << std::endl;
    }
}
int main() {
    int cantidadProductos;
    std::cout << "Ingrese cantidad de productos a registrar: ";
    std::cin >> cantidadProductos;
    if(cantidadProductos > 5) {
        std::cout << "[ERROR] No puedes ingresar mas de 5 productos." << std::endl;
        return 1;
    }
    Producto productos[5];
    Producto producto;
    for(int a = 0; a < cantidadProductos; a++) {
        std::cout << "Ingrese el nombre del producto (" << (a+1) << "/" << cantidadProductos << "): ";
        std::cin >> producto.nombre;
        std::cout << "Ingrese el precio del producto (" << (a+1) << "/" << cantidadProductos << "): ";
        std::cin >> producto.precio;
        productos[a] = producto;
    }
    for(int b = 0; b < cantidadProductos; b++) {
        registrarVenta(productos[b]);
    }
    mostrarReporte(productos, cantidadProductos);
    return 0;
}
