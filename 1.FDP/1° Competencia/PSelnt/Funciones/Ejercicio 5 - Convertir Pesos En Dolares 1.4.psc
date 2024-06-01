Funcion PaD <- PesosADolares ( P, D )
	PaD = P / D
Fin Funcion
Funcion DaP <- DolaresAPesos ( D, P )
	DaP = D * P
Fin Funcion
Algoritmo ConvertirPesosEnDolares
	Repeticion = 0
	Mientras Repeticion < 3 Hacer
		Escribir "Opcion 1.- Convertir pesos en dolares"                                  
		ESCRIBIR   "Opcion 2.- Covertir dolares a pesos"
		escribir "Elegir 1.-Opcion o 2.-Opcion"
		escribir "solo colocar el numero 1 o 2 "
		Leer Elegir
		Si Elegir >= 1 y Elegir <= 2 Entonces
			Si Elegir = 1 Entonces
				escribir "Has seleccionado la opcion 1.- Convertir pesos en dolares"
				escribir "Ingresar la cantidad de pesos"
				Leer pesos
				Si pesos > 0 Entonces
					escribir "Ingresar Valor del dolar"
					Leer dolares
					Si dolares > 0 Entonces
						Convercion= PesosADolares ( Pesos, Dolares)
						Escribir "Convercion= $", Convercion
					SiNo
						escribir "Valor de dolar invalida"
					Fin Si
				SiNo
					escribir "Cantidad de pesos invalida"
				Fin Si
			SiNo
				escribir "Has seleccionado opcion 2.- Covertir dolares a pesos"
				escribir "Ingresar la cantidad de dolares"
				Leer dolares
				Si dolares > 0 Entonces
					escribir "Ingresar Valor del pesos"
					Leer pesos
					Si pesos > 0 Entonces
						Convercion=  DolaresAPesos ( Dolares, Pesos )
						Escribir "Convercion= $", Convercion
					SiNo
						escribir "Valor de pesos invalidad"
					Fin Si
				SiNo
					escribir "Cantidad de dolares invalida"
				Fin Si
			Fin Si
		SiNo
			escribir "Favor de solo colocar 1 o 2"
		Fin Si
		Repeticion = Repeticion + 1
	Fin Mientras
FinAlgoritmo
