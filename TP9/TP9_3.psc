Funcion resultado <- esMultiplo(numero1, numero2)
	Definir resultado Como Logico
	Si numero1 % numero2 == 0
		resultado = Verdadero
	SiNo
		resultado = Falso
	FinSi
FinFuncion

Algoritmo TP9_3
	Definir unNumero, otroNumero Como Entero
	Escribir "Ingrese un numero: "
	Leer unNumero
	Escribir "Ingrese otro numero: "
	Leer otroNumero
	Si esMultiplo(unNumero, otroNumero)
		Escribir "Es multiplo"
	SiNo
		Escribir "No es multiplo"
	FinSi
FinAlgoritmo