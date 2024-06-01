Funcion A <- AreaTotal ( B, A )
	A = (B * A)/2
Fin Funcion
Algoritmo Area_de_un_triAngulo
	Dimension Matriz[4,3]
	i= 1
	Escribir "Calcular el area de un Triangulo"
	Escribir "El programa se repite 3 veces"
	
	// Procedimiento.
	Mientras i < 4 Hacer
		escribir "Ingresar la base"
		Leer Base
		Matriz[i,1]= Base
		Si Base > 0 Entonces
			escribir "Ingresar la altura"
			Leer Altura
			Matriz[i,2]= Altura
			Si Altura > 0 Entonces
				Matriz[i,3]= AreaTotal ( Matriz[i,1], Matriz[i,2] )
			SiNo
				ii= ii-1
				escribir "Corregir dato"
			Fin Si
		SiNo
			ii= ii-1
			escribir "Corregir dato" 
		Fin Si
		i = i + 1
	Fin Mientras
	
	// Impresion de los resultados.
	ii= 1
	mientras ii < i Hacer
		Si(Matriz[ii,3] > 0) Entonces
			Escribir "Ejercicios " , ii
			escribir "Area: ", Matriz[ii,2], "*", Matriz[ii,1], "/2" ," = ", Matriz[ii,3]
		FinSi
		ii= ii+1
	FinMientras
	
	// Creador y fecha.
	Escribir ""
	Escribir "Creador Jesus A. Mex Damian 18/11/2022"
FinAlgoritmo
