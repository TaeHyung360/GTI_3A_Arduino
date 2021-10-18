
// -*- mode: c++ -*-

// --------------------------------------------------------------
// Nombre archivo: PuertoSerie.h
// Autor: Juan Ferrera Sala
// Fecha: 2021-09-23
// Descripcion: Imprime por la consola de arduino
// --------------------------------------------------------------

#ifndef PUERTO_SERIE_H_INCLUIDO
#define PUERTO_SERIE_H_INCLUIDO

// ----------------------------------------------------------
// ----------------------------------------------------------
class PuertoSerie  {

public:
// .........................................................
// .........................................................
/**
* Cosntructor de PuertoSerie
* baudios: N -> constructor()
* 
*/
PuertoSerie (long baudios) {
	Serial.begin( baudios );
	// mejor no poner esto aquí: while ( !Serial ) delay(10);   
} // ()

// .........................................................
// .........................................................
/**
* esperarDisponible()
* 
*/
void esperarDisponible() {

	while ( !Serial ) {
	  delay(10);   
	}

} // ()

// .........................................................
// .........................................................
/**
* mensaje: Texto -> escribir()
* 
* @param texto mensaje a escribir por pantalla
*/
  template<typename T>
void escribir (T mensaje) {
	Serial.print( mensaje );
} // ()
  
}; // class PuertoSerie

// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
#endif
