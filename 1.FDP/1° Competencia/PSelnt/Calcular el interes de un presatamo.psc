Funcion X <- Interes ( P, I )
	X = (I / 100) * P
Fin Funcion
Funcion T <- Total ( P, X )
	T = P + X
Fin Funcion
Algoritmo Calcular_datos_de_un_prestamo
	Repetir
		imprimir "Calcualar el interes de un prestamo"
		Escribir "Ingregar la cantidad prestada"
		Leer Prestamo
		Si Prestamo > 0 Entonces
			Imprimir "Ingresar porcentaje de interes"
			Leer PorcentajeDeInteres
			Si PorcentajeDeInteres > 0 Entonces
				Imprimir "Cantidad de semanas a pagar"
				Leer Semana
				Si Semana > 0 Entonces
				Imprimir "Cantidad prestada: $" , Prestamo
				Imprimir "Porcentage de interes: " , PorcentajeDeInteres , "%"
				Calcular = Interes (Prestamo, PorcentajeDeInteres)
				Imprimir "Interes: $" , Calcular
				Sumar = Total (Prestamo, Calcular)
				Semanas= Sumar/Semana
				Imprimir "Pago semana: $" , Semanas
				Imprimir "Total: $" , Sumar
			Sino 
				Imprimir "Cantidad de semana invalida"
				Finsi
			Sino 
				Escribir "Cantidad de interes no valida"
			FinSi
			
		SiNo
			Escribir "Catidad de prestamo no valida"
		Fin Si
		Imprimir "Si desea continuar presione s y n si desea finalizar"
		Leer Respuesta
	Hasta Que Respuesta = "n"
FinAlgoritmo
