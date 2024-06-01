Funcion C <- CelsiusAF ( F )
	C = (F - 32) * 5/9
Fin Funcion

Algoritmo Convertir_grados_fahrenhed_a_celsius
	escribir "Convertir grados fahrenhed a celsius"
	Escribir "El programa se puede repetir 10 veces"
	Dimension Matriz[10,2]
	i=1
	
	// Procedimiento.
	Repetir
		Si i < 11 Entonces
			escribir "Ingresar grados fahrenhed"
			Leer Fahrenhed
			Matriz[i,1]= Fahrenhed
			Si Fahrenhed >= -459.69 y fahrenhed <> 0 Entonces
				Matriz[i,2]=  CelsiusAF ( Matriz[i,1] )
			SiNo
				ii= ii-1
				escribir "No hay temperaturas mas bajas a -459.69 F°" 
			fin Si
			escribir "Presiona 1 si desea continuar y 0 si quiere finalizar"
			leer Respuesta
		Sino 
			Respuesta = 0
		FinSi
		i= i+1
	Hasta Que Respuesta = 0
	
	// Impresion de resultados.
	
	ii= 1
	mientras ii < 11 y ii < i Hacer
		Si (Matriz[ii,2] >= -459.69 y Matriz[ii,2] <> 0) entonces 
			Escribir "Ejercicios " , ii
			escribir ""
			Escribir "Fahrenhed: " , Matriz[ii,1] , " F°" , " = " , "Celsius: " , Matriz[ii,2] , " C°" 
			Escribir ""
		Fin si
		ii= ii + 1
	FinMientras
	
	// Creador y fecha.
	Escribir ""
	Escribir "Creador: Jesus A. Mex Damian 20/11/2022"
FinAlgoritmo
