#include <iostream>
#include <bitset>

int main() {
    int unNumero = 0;
    std::cout << "Ingrese un numero: ";
    std::cin >> unNumero;
    std::cout << std::bitset<32>(unNumero).to_string() << std::endl;
    return 0;
}
