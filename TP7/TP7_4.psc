Algoritmo TP7_4
	Definir unNumero Como Entero
	Definir respuesta Como Caracter
	respuesta = ""
	Repetir
		Escribir "Ingrese un numero: "
		Leer unNumero
		Escribir "Desea introducir otro numero? (S/N): "
		Leer respuesta
		respuesta = Mayusculas(Subcadena(respuesta, 0, 1))
	Mientras Que respuesta <> "N"
FinAlgoritmo