Funcion resultado <- esNumeroCapicua(numeroAEvaluar)
	Definir resultado Como Logico
	Definir aux, numeroAlReves Como Entero
	aux = numeroAEvaluar
	numeroAlReves = 0
	Mientras aux > 0
		numeroAlReves = (numeroAlReves * 10) + aux % 10
		aux = trunc(aux / 10)
	FinMientras
	Si numeroAEvaluar == numeroAlReves
		resultado = Verdadero
	SiNo
		resulado = Falso
	FinSi
FinFuncion
Algoritmo TP9_7
	Definir unNumero Como Entero
	Escribir "Ingrese un numero: "
	Leer unNumero
	Si esNumeroCapicua(unNumero)
		Escribir "El numero ingresado es capicua"
	SiNo
		Escribir "El numero ingresado no es capicua"
	FinSi
FinAlgoritmo