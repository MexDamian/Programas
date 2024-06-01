Algoritmo CalcularElCostoProporcionalDeUnaReceta
	Escribir "Calcular el costo proporcional de ingredientes"
	escribir "Ingresar la medida del ingrediente"
	Leer Unidad
	escribir "Ingresar la cantidad en la que venden el ingrediente por " ,Unidad
	Leer CantidadDelProducto
	escribir "Ingresar el costo de venta del ingrediente por " ,CantidadDelProducto, Unidad
	Leer Costo1
	escribir "Ingresar la cantidad a usar"
	Leer Cantidad
	Costo= Cantidad * Costo1 / CantidadDelProducto
	Escribir "Costo= $" , Costo
FinAlgoritmo
