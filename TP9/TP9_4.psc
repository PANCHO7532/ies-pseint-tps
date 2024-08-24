Funcion resultado <- contadorDeLetras(cadenaAEvaluar, letraABuscar)
	Definir resultado, i Como Entero
	resultado = 0
	Para i <- 1 Hasta Longitud(cadenaAEvaluar) Con Paso 1
		Si Subcadena(cadenaAEvaluar, i, i) == letraABuscar
			resultado = resultado + 1
		FinSi
	FinPara
FinFuncion
Algoritmo TP9_4
	Definir unaFrase, unaLetra Como Caracter
	Escribir "Escriba una frase: "
	Leer unaFrase
	Escribir "Escriba una letra: "
	Leer unaLetra
	unaLetra = Subcadena(unaLetra, 1, 1) // Solo la primera letra ingresada
	Escribir "La cantidad de veces que la letra ", unaLetra, " aparecio fue: ", contadorDeLetras(unaFrase, unaLetra)
FinAlgoritmo