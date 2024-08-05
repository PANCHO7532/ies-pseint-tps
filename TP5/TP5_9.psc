Algoritmo TP5_9
	Definir tiempoEnMinutos Como Entero
	Definir dia Como Caracter
	Definir turno Como Caracter
	Definir importeTotal Como Real
	Escribir "Ingrese el tiempo en minutos de la llamada: "
	Leer tiempoEnMinutos
	Escribir "Ingrese el dia de la llamada: "
	Leer dia
	Escribir "Ingrese el turno: "
	Leer turno
	dia = Mayusculas(dia)
	turno = Mayusculas(turno)
	importeTotal = tiempoEnMinutos * 30 // 30 pesos por minuto
	Si dia == "DOMINGO"
		importeTotal = importeTotal + importeTotal * (3/100)
	FinSi
	Si turno == "MAÑANA"
		importeTotal = importeTotal + importeTotal * (15/100)
	FinSi
	Si turno == "TARDE"
		importeTotal = importeTotal + importeTotal * (10/100)
	FinSi
	Escribir "El total a pagar es de: $", importeTotal
FinAlgoritmo