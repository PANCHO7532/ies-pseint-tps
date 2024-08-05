Algoritmo TP3_5
	Definir precioProductoInicial Como Real
	Definir precioProductoFinal Como Real
	Definir resultadoPorcentajeAumento Como Real
	Escribir "Ingrese el precio del producto al inicio del año: "
	Leer precioProductoInicial
	Escribir "Ingrese el precio del producto al final del año: "
	Leer precioProductoFinal
	resultadoPorcentajeAumento = ((precioProductoFinal - precioProductoInicial) / 100) * 100
	Escribir "El porcentaje de aumento es: ", resultadoPorcentajeAumento, "%"
FinAlgoritmo
