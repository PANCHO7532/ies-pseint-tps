#include <iostream>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));
    int notasEstudiantes[100];
    int cantidadDeficientes = 0;
    int cantidadRegulares = 0;
    int cantidadBuenos = 0;
    int cantidadExcelentes = 0;
    for(int contador = 0; contador < 100; contador++) {
        notasEstudiantes[contador] = rand() % 10 + 1;
        if(notasEstudiantes[contador] <= 3) {
            cantidadDeficientes = cantidadDeficientes + 1;
        }
        if(notasEstudiantes[contador] >= 4 && notasEstudiantes[contador] <= 5) {
            cantidadRegulares = cantidadRegulares + 1;
        }
        if(notasEstudiantes[contador] >= 6 && notasEstudiantes[contador] <= 8) {
            cantidadBuenos = cantidadBuenos + 1;
        }
        if(notasEstudiantes[contador] >= 9 && notasEstudiantes[contador] <= 10) {
            cantidadExcelentes = cantidadExcelentes + 1;
        }
    }
    std::cout << "Cantidad de alumnos deficientes: " << cantidadDeficientes << std::endl;
    std::cout << "Cantidad de alumnos regulares: " << cantidadRegulares << std::endl;
    std::cout << "Cantidad de alumnos buenos: " << cantidadBuenos << std::endl;
    std::cout << "Cantidad de alumnos excelentes: " << cantidadExcelentes << std::endl;
}
