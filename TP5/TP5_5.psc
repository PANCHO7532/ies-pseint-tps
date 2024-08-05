Algoritmo TP5_5
	Definir eleccion Como Caracter
	Escribir "Escriba S/N: "
	Leer eleccion
	eleccion = Mayusculas(eleccion)
	Si Longitud(eleccion) == 1
		Segun eleccion Hacer
			"S":
				Escribir "CORRECTO"
			"N":
				Escribir "INCORRECTO"
			De Otro Modo:
				Escribir "Por favor solo escriba S o N"
		FinSegun
	SiNo
		Escribir "Por favor solo escriba S o N"
	FinSi
FinAlgoritmo