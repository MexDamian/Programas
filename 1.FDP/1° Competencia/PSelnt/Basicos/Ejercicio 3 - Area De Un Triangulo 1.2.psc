Algoritmo AreaDeUntriAngulo
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
FinAlgoritmo
