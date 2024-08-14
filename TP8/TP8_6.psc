Algoritmo TP8_6
	Definir unaFrase Como Caracter
	Definir i Como Entero
	Escribir "Escriba una frase: "
	Leer unaFrase
	Para i<-Longitud(unaFrase) Hasta 0 Con Paso -1
		Escribir Sin Saltar Subcadena(unaFrase, i, i), " "
	FinPara
FinAlgoritmo