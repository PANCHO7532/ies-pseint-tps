Algoritmo TP4_5
	Definir sueldoBase Como Real
	Definir venta1, venta2, venta3 Como Real
	Definir totalVentas Como Real
	Definir totalComisiones Como Real
	Definir totalMes Como Real
	Escribir "Escriba su sueldo base: "
	Leer sueldoBase
	Escribir "Escriba primera venta: "
	Leer venta1
	Escribir "Escriba segunda venta: "
	Leer venta2
	Escribir "Escriba tercera venta: "
	Leer venta3
	totalVentas = venta1 + venta2 + venta3
	totalComisiones = totalVentas * 0.10
	totalMes = sueldoBase + totalComisiones
	Escribir "Dinero por comisiones: ", totalComisiones
	Escribir "Total recibido en el mes: ", totalMes
FinAlgoritmo