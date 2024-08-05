Algoritmo TP3_1
	Definir cantidadDeChicos Como Entero
	Definir cantidadDeChicas Como Entero
	Definir porcentajeDeChicos Como Real
	Definir porcentajeDeChicas Como Real
	Definir totalDeAlumnos Como Entero
	Escribir "Ingrese la cantidad de chicos que hay en el curso: "
	Leer cantidadDeChicos
	Escribir "Ingrese la cantidad de chicas que hay en el curso: "
	Leer cantidadDeChicas
	totalDeAlumnos = cantidadDeChicos + cantidadDeChicas
	porcentajeDeChicos = (cantidadDeChicos * 100) / totalDeAlumnos
	porcentajeDeChicas = (cantidadDeChicas * 100) / totalDeAlumnos
	Escribir "La cantidad total de alumnos en el aula son: " totalDeAlumnos
	Escribir "El porcentaje de chicos en el aula es de: ", porcentajeDeChicos, "%"
	Escribir "El porcentaje de chicas en el aula es de: ", porcentajeDeChicas, "%"
FinAlgoritmo
