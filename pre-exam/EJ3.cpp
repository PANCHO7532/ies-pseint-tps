#include <iostream>
#include <locale.h>
#include <time.h>

bool isPar(int numero) {
    if(numero % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int numeros[20];
    setlocale(LC_ALL, "");
    srand(time(NULL));
    for(int a = 0; a < 20; a++) {
        numeros[a] = rand() % 100 + 1;
    }
    for(int b = 0; b < 20; b++) {
        if(isPar(numeros[b]) == false) {
            std::cout << numeros[b] << std::endl;
        }
    }
    return 0;
}
