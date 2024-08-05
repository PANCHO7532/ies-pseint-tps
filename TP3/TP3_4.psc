Algoritmo TP3_4
	Definir cantidadDeDias Como Entero
	Definir resultadoHoras Como Entero
	Definir resultadoMinutos Como Entero
	Definir resultadoSegundos Como Entero
	Escribir "Ingrese cantidad de dias: "
	Leer cantidadDeDias
	resultadoHoras = 24 * cantidadDeDias
	resultadoMinutos = 60 * resultadoHoras
	resultadoSegundos = 60 * resultadoMinutos
	Escribir "Cantidad en horas: ", resultadoHoras
	Escribir "Cantidad en minutos: ", resultadoMinutos
	Escribir "Cantidad en segundos: ", resultadoSegundos
FinAlgoritmo
