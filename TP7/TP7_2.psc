Algoritmo TP7_2
	Definir numeroMaximo Como Entero
	Definir numeroMinimo Como Entero
	Definir sumaTotalNumeros Como Entero
	Definir contador Como Entero
	Definir numeroIngresado Como Entero
	numeroMaximo = 0
	numeroMinimo = 0
	sumaTotalNumeros = 0
	contador = 0
	Repetir
		Escribir "Ingrese un numero: "
		Leer numeroIngresado
		Si numeroMinimo == 0 y numeroMaximo == 0
			numeroMinimo = numeroIngresado
			numeroMaximo = numeroIngresado
		FinSi
		Si numeroIngresado <> 0
			Si numeroIngresado > numeroMaximo
				numeroMaximo = numeroIngresado
			FinSi
			Si numeroIngresado < numeroMinimo
				numeroMinimo = numeroIngresado
			FinSi
			sumaTotalNumeros = sumaTotalNumeros + numeroIngresado
			contador = contador + 1
		FinSi
	Mientras Que numeroIngresado <> 0
	Escribir "El numero minimo ingresado es: ", numeroMinimo
	Escribir "El numero maximo ingresado es: ", numeroMaximo
	Escribir "El promedio de todos los numeros ingresados es: ", sumaTotalNumeros / contador
FinAlgoritmo