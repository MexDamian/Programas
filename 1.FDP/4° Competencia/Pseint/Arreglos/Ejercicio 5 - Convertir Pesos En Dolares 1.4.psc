Funcion PaD <- PesosADolares ( P, D )
	PaD = P / D
Fin Funcion
Algoritmo Convertir_pesos_en_dolares
	Dimension Matriz[4,3]
	i = 1
	Escribir "Convertir pesos a dolares"
	Escribir "El programa se repetira 3 veces"
	
	//Procedimiento.
	Mientras i < 4 Hacer
		escribir "Ingresar la cantidad de pesos"
		Leer pesos
		Matriz[i,1]= pesos
		Si pesos > 0 Entonces
			escribir "Ingresar Valor del dolar"
			Leer dolares
			Matriz[i,2]= dolares
			Si dolares > 0 Entonces
				Matriz[i,3]= PesosADolares ( Matriz[i,1], Matriz[i,2])
			SiNo
				ii= ii-1
			escribir "Valor de dolar invalida"
			Fin Si
		SiNo
			ii= ii-1
		escribir "Cantidad de pesos invalida"
		Fin Si
		i = i + 1
	Fin Mientras
	
	// Imprecion de resultados.
	ii= 1
	Mientras ii < i Hacer
		Si (Matriz[ii,3] > 0) Entonces
			escribir "Ejercicios " , ii
			escribir "Convertir: Pesos: $" , Matriz[ii,1] , "/" , "Valor: $" , Matriz[ii,2] , " = $" , Matriz[ii,3]
		FinSi
		ii = ii + 1
	FinMientras
	
	//  Creador y fecha
	Escribir ""
	Escribir "Creador Jesus A. Mex Damian 18/11/2022"
FinAlgoritmo
