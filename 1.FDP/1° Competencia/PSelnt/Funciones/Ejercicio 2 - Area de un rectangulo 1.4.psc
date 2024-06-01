Funcion A <- AreaTotal ( B, A )
	A = B * A
Fin Funcion

Algoritmo Areadeunrectangulo
	Repeticion = 0
	Mientras Repeticion < 3 Hacer
		Escribir "Caltular el area de un rectangulo"
		escribir "Ingresar base"
		Leer Base
		Si Base > 0 Entonces
			escribir "Ingresar altura"
			Leer Altura
			Si Altura > 0 Entonces
				area= AreaTotal ( Base, Altura )
				Escribir "area=" , area , "m2"
			SiNo
				escribir "Error en el dato"
			Fin Si
		SiNo
			escribir "Error en el dato"
		Fin Si
		Repeticion = Repeticion + 1
	Fin Mientras
FinAlgoritmo
