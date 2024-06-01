Funcion A <- AreaCirculo ( R , Pii )
	A= Pii * (R * R)
Fin Funcion

Algoritmo AreaDeUnCirculo
	Repeticion = 0
	Mientras Repeticion < 3 Hacer
		Escribir "Area de un circulo"
			escribir "Ingresar Valor del radio"
			Leer Radio
			Si Radio > 0 Entonces
				Pii= 3.1416
				area= AreaCirculo ( Radio, Pii)
				Escribir "Area=", area , "m2"
			SiNo
				escribir "Dato de Radio incorrecto"
			Fin Si
		
		Repeticion = Repeticion + 1
	Fin Mientras	
FinAlgoritmo
