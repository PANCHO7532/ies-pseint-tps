Algoritmo TP8_3
	Definir cantidadDeAlumnos, cantidadDeAlumnosReprobados, cantidadDeAlumnosMayorIntegrador, totalEstudiantesEnParcial, i Como Entero
	Definir notaIngresadaTPI, notaIngresadaExposicion, notaIngresadaParcial, notaFinal Como Real
	Definir totalNotaFinalReprobados, mayorNotaExposicion Como Real
	cantidadDeAlumnosReprobados = 0
	totalNotaFinalReprobados = 0
	cantidadDeAlumnosMayorIntegrador = 0
	mayorNotaExposicion = 0
	totalEstudiantesEnParcial = 0
	Escribir "Ingrese la cantidad de alumnos: "
	Leer cantidadDeAlumnos
	Para i<-1 Hasta cantidadDeAlumnos Con Paso 1
		Escribir "Ingrese la nota en Trabajo Practico Integrador para alumno ", i, ": "
		Leer notaIngresadaTPI
		Escribir "Ingrese la nota en Exposicion para alumno ", i, ": "
		Leer notaIngresadaExposicion
		Escribir "Ingrese la nota en Parcial para alumno ", i, ": "
		Leer notaIngresadaParcial
		notaFinal = (notaIngresadaTPI * (35 / 100)) + (notaIngresadaExposicion * (25 / 100)) + (notaIngresadaParcial * (40 / 100))
		Si notaFinal < 6.5
			cantidadDeAlumnosReprobados = cantidadDeAlumnosReprobados + 1
			totalNotaFinalReprobados = totalNotaFinalReprobados + notaFinal
		FinSi
		Si notaIngresadaTPI > 7.5
			cantidadDeAlumnosMayorIntegrador = cantidadDeAlumnosMayorIntegrador + 1
		FinSi
		Si notaIngresadaExposicion > mayorNotaExposicion
			mayorNotaExposicion = notaIngresadaExposicion
		FinSi
		Si notaIngresadaParcial >= 4.0 y notaIngresadaParcial <= 7.5
			totalEstudiantesEnParcial = totalEstudiantesEnParcial + 1
		FinSi
	FinPara
	Si cantidadDeAlumnosReprobados == 0
		Escribir "Nota promedio final de los estudiantes que reprobaron el curso: No hubo alumnos reprobados"
	SiNo
		Escribir "Nota promedio final de los estudiantes que reprobaron el curso: ", totalNotaFinalReprobados / cantidadDeAlumnosReprobados
	FinSi
	Escribir "Porcentaje de alumnos que tienen una nota de integrador mayor a 7.5: ", (cantidadDeAlumnosMayorIntegrador * 100) / cantidadDeAlumnos, "%"
	Escribir "Mayor nota obtenida en las exposiciones: ", mayorNotaExposicion
	Escribir "Total de estudiantes que obtuvieron en el parcial una nota entre 4.0 y 7.5: ", totalEstudiantesEnParcial
FinAlgoritmo