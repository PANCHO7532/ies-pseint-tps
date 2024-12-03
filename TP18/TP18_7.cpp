#include <iostream>

int main() {
    int matriz[5][15];
    for(int contador1 = 0; contador1 < 5; contador1++) {
        for(int contador2 = 0; contador2 < 15; contador2++) {
            if(contador1 == 0 || contador1 == 4) {
                matriz[contador1][contador2] = 1;
            } else if(contador1 != 0 && (contador2 == 0) || (contador2 == 14)) {
                matriz[contador1][contador2] = 1;
            } else {
                matriz[contador1][contador2] = 0;
            }
            std::cout << matriz[contador1][contador2];
        }
        std::cout << std::endl;
    }
}
