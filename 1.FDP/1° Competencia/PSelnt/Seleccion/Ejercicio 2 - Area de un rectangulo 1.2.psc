Algoritmo Areadeunrectangulo
	Escribir "Caltular el area de un rectangulo"
	escribir "Ingresar base"
	Leer Base
	Si Base > 0 Entonces
		escribir "Ingresar altura"
		Leer Altura
		Si Altura > 0 Entonces
			area= Base * Altura
			Escribir "area=" , area , "m2"
		SiNo
			escribir "Error en el dato"
		Fin Si
	SiNo
		escribir "Error en el dato"
	Fin Si
	
FinAlgoritmo
