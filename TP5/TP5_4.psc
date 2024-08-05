Algoritmo TP5_4
	Definir unNumero Como Entero
	Escribir "Escriba un numero: "
	Leer unNumero
	Si unNumero > 99 y unNumero < 1000
		Definir centenas Como Real
		Definir unidades Como Real
		centenas = trunc(unNumero / 100)
		unidades = unNumero % 10
		Si centenas == unidades
			Escribir "El numero es capicua"
		SiNo
			Escribir "El numero no es capicua"
		FinSi
	SiNo
		Escribir "Por favor ingrese un numero de tres cifras"
	FinSi
FinAlgoritmo