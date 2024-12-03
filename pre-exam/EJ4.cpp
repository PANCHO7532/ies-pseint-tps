#include <iostream>
#include <locale.h>
#include <time.h>

bool esMayorA20(int numero) {
    if(numero > 20) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int numeros[50];
    setlocale(LC_ALL, "");
    srand(time(NULL));
    for(int a = 0; a < 50; a++) {
        numeros[a] = rand() % 100 + 1;
    }
    for(int b = 0; b < 50; b++) {
        if(esMayorA20(numeros[b]) == false) {
            std::cout << numeros[b] << std::endl;
        }
    }
    return 0;
}
