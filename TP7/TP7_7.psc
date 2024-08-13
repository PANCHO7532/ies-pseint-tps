Algoritmo TP7_7
	Definir numeroLeido, solucion, respuesta Como Entero
	numeroLeido = 0
	respueta = 0
	solucion = Aleatorio(1, 100)
	Repetir
		Escribir "Adivina un numero entre 1 y 100: "
		Leer respuesta
		Si respuesta < solucion
			Escribir "Mas alto!"
		FinSi
		Si respuesta > solucion
			Escribir "Mas bajo!"
		FinSi
	Mientras Que respuesta <> solucion
	Escribir "Adivinaste el numero! La respuesta era ", solucion
FinAlgoritmo