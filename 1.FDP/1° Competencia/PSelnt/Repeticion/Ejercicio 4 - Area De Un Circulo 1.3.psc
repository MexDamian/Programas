Algoritmo AreaDeUnCirculo
	Repeticion = 0
	Mientras Repeticion < 3 Hacer
		Escribir "Area de un circulo"
		Pii= 3.1416
			escribir "Ingresar Valor del radio"
			Leer Radio
			Si Radio > 0 Entonces
				area= Pii * (Radio * Radio)
				Escribir "Area=", area , "m2"
			SiNo
				escribir "Dato de Radio incorrecto"
			Fin Si
		
		Repeticion = Repeticion + 1
	Fin Mientras	
FinAlgoritmo
