Algoritmo AreaDeUnCirculo
	Escribir "Area de un circulo"
	escribir "Ingresar valor de pi"
	Leer Pii
	Si Pii > 3 y 4 > Pii Entonces
		escribir "Ingresar Valor del radio"
		Leer Radio
		Si Radio > 0 Entonces
			area= Pii * (Radio * Radio)
			Escribir "Area=", area , "m2"
		SiNo
			escribir "Dato de Radio incorrecto"
		Fin Si
	SiNo
		escribir "Dato de Pi incorrecto"
	Fin Si
	
FinAlgoritmo
