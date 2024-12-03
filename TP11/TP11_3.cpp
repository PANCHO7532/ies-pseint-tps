#include <iostream>

int main() {
    int montoTotalCompra = 0;
    std::cout << "Ingrese monto total de la compra: ";
    std::cin >> montoTotalCompra;
    if(montoTotalCompra > 1000) {
        montoTotalCompra = montoTotalCompra - ((montoTotalCompra * 15) / 100);
    }
    std::cout << "Precio final a pagar: " << montoTotalCompra;
    return 0;
}
