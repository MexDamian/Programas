Funcion C <- Cambiodecompra ( D, T )
	C= D - T
Fin Funcion
Algoritmo Dinerosobrante
	Repeticion = 0
	Mientras Repeticion < 3 Hacer
		Escribir "Calcular el cambio de una compra"
		escribir "Ingresar el Total de compra"
		Leer Total
		Si Total> 0 Entonces
			escribir "Ingresar la Cantidad de dinero"
			Leer Dinero
			Si Dinero >= Total Entonces
				cambio= Cambiodecompra ( Dinero, Total )
				Escribir "cambio= $", cambio
			SiNo
				escribir " Dato no valido"
			Fin Si
		SiNo
			escribir " Dato no valido"
		Fin Si
		Repeticion = Repeticion + 1
	Fin Mientras
FinAlgoritmo
