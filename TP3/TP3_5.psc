Algoritmo TP3_5
	Definir precioProductoInicial Como Real
	Definir precioProductoFinal Como Real
	Definir resultadoPorcentajeAumento Como Real
	Escribir "Ingrese el precio del producto al inicio del a�o: "
	Leer precioProductoInicial
	Escribir "Ingrese el precio del producto al final del a�o: "
	Leer precioProductoFinal
	resultadoPorcentajeAumento = ((precioProductoFinal - precioProductoInicial) / 100) * 100
	Escribir "El porcentaje de aumento es: ", resultadoPorcentajeAumento, "%"
FinAlgoritmo
