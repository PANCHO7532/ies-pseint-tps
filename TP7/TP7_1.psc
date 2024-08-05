Algoritmo TP7_1
	Definir claveIngresada Como Caracter
	Definir claveCorrecta Como Logico
	Definir intentos Como Entero
	intentos = 0
	Repetir
		Escribir "Ingrese clave: "
		Leer claveIngresada
		Si Mayusculas(claveIngresada) == "EUREKA"
			claveCorrecta = Verdadero
		SiNo
			intentos = intentos + 1
		FinSi
	Mientras Que intentos < 3 y claveCorrecta == Falso
	Si claveCorrecta == Verdadero
		Escribir "Felicidades, has acertado la clave!"
	SiNo
		Escribir "Has agotado los intentos para acertar la clave."
	FinSi
FinAlgoritmo