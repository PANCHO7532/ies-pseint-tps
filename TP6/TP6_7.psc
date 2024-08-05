Algoritmo TP6_7
	Definir nombreAlumno Como Caracter
	Definir notaP, notaTP, notaT Como Real
	nombreAlumno = "Alumno"
	Mientras nombreAlumno <> ""
		Escribir "Ingrese nombre del alumno: "
		Leer nombreAlumno
		Si nombreAlumno <> ""
			Escribir "Ingrese nota practica: "
			Leer notaP
			Escribir "Ingrese nota trabajo practico: "
			Leer notaTP
			Escribir "Ingrese nota teorica: "
			Leer notaT
			Si notaP > -1 y notaP < 11 y notaTP > -1 y notaTP < 11 y notaT > -1 y notaT < 11
				Escribir nombreAlumno, " - Promedio: ", (notaP + notaTP + notaT) / 3
			SiNo
				Escribir "ERROR - Fuera de rango"
			FinSi
		FinSi
	FinMientras
FinAlgoritmo