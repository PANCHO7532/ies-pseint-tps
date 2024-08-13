Algoritmo TP7_6
	Definir cantidadDeSuma, contador, resultado, aux Como Entero
	Escribir "Ingrese cantidad de numeros pares a sumar: "
	Leer cantidadDeSuma
	resultado = 0
	contador = 0
	aux = 1
	Repetir
		Si aux % 2 <> 0
			aux = aux + 1
		SiNo
			resultado = resultado + aux
			contador = contador + 1
			aux = aux + 1
		FinSi
	Mientras Que contador <> cantidadDeSuma
	Escribir "La suma de ", cantidadDeSuma, " numeros pares es: ", resultado
FinAlgoritmo