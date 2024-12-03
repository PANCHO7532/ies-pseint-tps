#include <iostream>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));
    int numero[50];
    float promedio = 0.0f;
    for(int contador = 0; contador < 50; contador++) {
        numero[contador] = rand() % 100 + 1;
        promedio = promedio + numero[contador];
        std::cout << numero[contador] << std::endl;
    }
    promedio = promedio / 50;
    std::cout << "El promedio de los numeros ingresados es: " << promedio;
}
