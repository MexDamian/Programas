Algoritmo Dinerosobrante
	Escribir "Calcular el cambio de una compra"
	escribir "Ingresar el Total de compra"
	Leer Total
	Si Total> 0 Entonces
		escribir "Ingresar la Cantidad de dinero"
		Leer Dinero
		Si Dinero >= Total Entonces
			cambio= Dinero - Total
			Escribir "cambio= $", cambio
		SiNo
				escribir " Dato no valido"
		Fin Si
	SiNo
			escribir " Dato no valido"
	Fin Si
FinAlgoritmo
