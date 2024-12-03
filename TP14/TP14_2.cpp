#include <iostream>

int main() {
    int unNumero = 0;
    float sumaPrimos = 0;
    float cantidadPrimos = 0;
    while(true) {
        std::cout << "Ingresa un numero: ";
        std::cin >> unNumero;
        if((unNumero < 100) && (unNumero > 1)) {
            // Si ingresamos un numero aceptable, salimos de este bucle
            break;
        } else {
            std::cout << "Por favor ingrese un numero mayor a 1 y menor a 100" << std::endl;
        }
    }
    // Empezamos desde 2 ya que 1 y numeros menores que 1 no son primos segun tengo entendido
    for(int a = 2; a <= unNumero; a++) {
        bool esPrimo = true;
        // Evaluamos el supuesto numero primo contenido en A en un bucle "for" del 2 al 10
        // El mismo comprobará si el numero realmente es primo, mediante la siguiente logica:
        // "Si un numero es divisible por otro y ese otro numero no es el mismo numero, entonces no es primo"
        // La razon por la cual evaluamos del 2 al 10 es porque naturalmente debe de haber un numero divisible en este rango
        // y calcular divisibilidad mas allá del 10 no tendria sentido.
        for(int b = 2; b <= 10; b++) {
            // Por lo tanto, si encontramos otro divisor que no sea el mismo numero, decimos que no es primo.
            if((a % b == 0) && (b != a)) { esPrimo = false; }
        }
        if(esPrimo) {
            std::cout << a << std::endl;
            sumaPrimos = sumaPrimos + a;
            cantidadPrimos++;
        }
    }
    std::cout << "Suma de todos los numeros primos encontrados: " << sumaPrimos << std::endl;
    std::cout << "Promedio de todos lo numeros primos encontrados: " << (sumaPrimos / cantidadPrimos) << std::endl;
    return 0;
}
