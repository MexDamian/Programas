Funcion C <- Calcular ( C, Co, Ca )
	C = C * Co / Ca
Fin Funcion
Algoritmo CalcularElCostoProporcionalDeUnaReceta
	Repetir
		Escribir "Calcular el costo proporcional de ingredientes"
		escribir "Ingresar la medida del ingrediente"
		Leer Unidad
		escribir "Ingresar la cantidad en la que venden el ingrediente por " ,Unidad
		Leer CantidadDelProducto
		Si CantidadDelProducto > 0 Entonces
			escribir "Ingresar el costo de venta del ingrediente por " ,CantidadDelProducto, Unidad
			Leer Costo1
			Si Costo1 > 0 Entonces
				escribir "Ingresar la cantidad a usar"
				Leer Cantidad
				Si Cantidad > 0 Entonces
					Costo= Calcular ( Cantidad, Costo1, CantidadDelProducto )
					Escribir "Costo= $" , Costo
				SiNo
					escribir "Cantidad no valida"
				Fin Si
			SiNo
				escribir "Costo no valido"
			Fin Si
		SiNo
			escribir "Cantidad no valida"
		Fin Si
		escribir "presiona s si desea continuar y n si quiere finalizar"
		leer Respuesta
	Hasta Que Respuesta = "n"
FinAlgoritmo
