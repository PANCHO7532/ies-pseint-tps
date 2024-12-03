#include <iostream>
#include <locale.h>
#include <time.h>

void rellenarMatriz(int* matriz) {
    setlocale(LC_ALL, "");
    srand(time(NULL));
    for(int contador = 0; contador < 10; contador++) {
        matriz[contador] =  rand() % 100 + 1;
    }
}
void mostrarMatriz(int* matriz) {
    for(int contador = 0; contador < 10; contador++) {
        std::cout << "matriz[" << contador << "] = " << matriz[contador] << std::endl;
    }
}
int main() {
    int unaMatriz[10];
    rellenarMatriz(unaMatriz);
    mostrarMatriz(unaMatriz);
}
