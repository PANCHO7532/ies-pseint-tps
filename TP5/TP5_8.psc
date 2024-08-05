Algoritmo TP5_8
	Definir contenido Como Caracter
	Escribir "Escriba frase/palabra: "
	Leer contenido
	Si Longitud(contenido) == 4
		contenido = Concatenar(contenido, "!")
	SiNo
		contenido = Concatenar(contenido, "?")
	FinSi
	Escribir contenido
FinAlgoritmo