Algoritmo AreaDeUntriAngulo
	Repeticion = 0
	Mientras Repeticion < 3 Hacer
		Escribir "Area de un Triangulo"
		escribir "Ingresar la base"
		Leer Base
		Si Base > 0 Entonces
			escribir "Ingresar la altura"
			Leer Altura
			Si Altura > 0 Entonces
				area= (Base * Altura)/2
				Escribir "Area=" , area , "m2"
			SiNo
				escribir "Corregir dato"
			Fin Si
		SiNo
			escribir "Corregir dato" 
		Fin Si
		
		Repeticion = Repeticion + 1
	Fin Mientras
FinAlgoritmo
