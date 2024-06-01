Funcion F <- FahrenheiAC ( C )
	F = (C * 1.8) + 32
Fin Funcion
Funcion C <- CelsiusAF ( F )
	C = (F - 32) * 5/9
Fin Funcion

Algoritmo ConvertirGradosFahrenhedACelsius
	Repetir
		Escribir "Opcion 1.- Convertir grados Celsius a Fahrenhei                          Opcion 2.- Convertir de Fahrenhet a Celsius"
		Escribir "Solo colocar el numero 1 o 2 "
		Leer Elegir
		Si Elegir >= 1 y Elegir <= 2 Entonces
			Si Elegir = 1 Entonces 
				escribir "Has elegido la opcion 1.- Convertir grados Celsius a Fahrenhei"
				escribir "Inresar grados celsius"
				Leer Celsius
				Si Celsius >= -273.19 Entonces
					Fahrenheit = FahrenheiAC ( Celsius )
					Escribir "Fahrenheit =" , Fahrenheit , "F°"
				SiNo
					escribir "No hay temperaturas mas bajas a -273.19 C°" 
				Fin Si
			SiNo 
				escribir "Has elegido la opcion 2.- Convertir de Fahrenhet a Celsius"
				escribir "Ingresar grados fahrenhed"
				Leer Fahrenhed
				Si Fahrenhed >= -459.69 Entonces
					Celsius=  CelsiusAF ( Fahrenhed )
					Escribir "Celsius=" , Celsius , "C°"
				SiNo
					escribir "No hay temperaturas mas bajas a -459.69 F°" 
				Fin Si
			Fin Si
		SiNo
			escribir "Favor de solo ingresar 1 o 2"
		Fin Si
		escribir "presiona s si desea continuar y n si quiere finalizar"
		leer Respuesta
	Hasta Que Respuesta = "n"
FinAlgoritmo
