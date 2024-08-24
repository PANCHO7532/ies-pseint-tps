Funcion resultado <- esPrimo(numeroAEvaluar)
	Definir resultado Como Logico
	Definir i Como Entero
	Si numeroAEvaluar == 1 o numeroAEvaluar < 1
		resultado = Falso
	SiNo
		resultado = Verdadero
		Para i <- 2 Hasta 10 Con Paso 1
			// Teoricamente, un numero cualquiera debe de ser divisible por uno de estos... verdad?
			Si numeroAEvaluar MOD i == 0 y i <> numeroAEvaluar
				resultado = Falso
			FinSi
		FinPara
	FinSi
FinFuncion
Algoritmo TP9_5
	Definir unNumero Como Entero
	Escribir "Ingrese un numero: "
	Leer unNumero
	Si esPrimo(unNumero)
		Escribir "El numero es primo."
	SiNo
		Escribir "El numero no es primo."
	FinSi
FinAlgoritmo