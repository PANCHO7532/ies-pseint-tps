Algoritmo TP8_2
	Definir unaFrase Como Caracter
	Definir i Como Entero
	Escribir "Escriba una frase: "
	Leer unaFrase
	Para i<-0 Hasta Longitud(unaFrase) Con Paso 1
		Escribir Sin Saltar Subcadena(unaFrase, i, i), " "
	FinPara
FinAlgoritmo