Funcion C <- Cambiodecompra ( D, T )
	C= D - T
Fin Funcion
Algoritmo Cambio_de_una_compra
	Dimension Matriz[3,3]
	i= 1
	Escribir "Calcular el cambio de una compra"
	Escribir "El programa se repetira 3 veces"
	
	// Procedimiento.
	Mientras i < 4 Hacer
		escribir "Ingresar el Total de compra"
		Leer Total
		Matriz[i,1]= Total
		Si Total> 0 Entonces
			escribir "Ingresar la Cantidad de dinero"
			Leer Dinero
			Matriz[i,2]= Dinero
			Si Dinero >= Total Entonces
				Matriz[i,3]= Cambiodecompra ( Matriz[i,2], Matriz[i,1] )
				Escribir ""
			SiNo
				i1= ii-1
				Matriz[i,3]= -1
				escribir " Dato no valido"
			Fin Si
		SiNo
			i1= ii-1
			Matriz[i,3]= -1
			escribir " Dato no valido"
		Fin Si
		i = i + 1
	Fin Mientras
	
	// Impricion de resultados.
	ii= 1
	mientras ii < i Hacer
		Si(Matriz[ii,3] > -1) Entonces
			Escribir "Ejercicios " , ii
			escribir "Cambio: $", Matriz[ii,2], " - $", Matriz[ii,1], " = $", Matriz[ii,3]
		Fin si
		ii= ii+1
	FinMientras
	
	// Creador y fecha.
	Escribir ""
	Escribir "Creador Jesus A. Mex Damian 18/11/2022"
FinAlgoritmo
