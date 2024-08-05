Algoritmo TP4_8
	Definir num Como Entero
	Definir unidad Como Entero
	Definir decena Como Real
	Escribir "Ingrese un numero entero: "
	Leer num
	unidad = num % 10
	decena = trunc(num / 10)
	Escribir unidad, decena
FinAlgoritmo