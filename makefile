EscobarJose_Ejercicio27.dat : EscobarJose_Ejercicio27.x
	./EscobarJose_Ejercicio27.x > EscobarJose_Ejercicio27.dat
	
EscobarJose_Ejercicio27.x : EscobarJose_Ejercicio27.cpp
	c++ EscobarJose_Ejercicio27.cpp -o EscobarJose_Ejercicio27.x
	
clean:
	rm EscobarJose_Ejercicio27.x 	rm EscobarJose_Ejercicio27.dat