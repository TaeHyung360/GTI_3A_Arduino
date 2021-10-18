// -*- mode: c++ -*-

// --------------------------------------------------------------
// Nombre archivo: Medidor.h
// Autor: Juan Ferrera Sala
// Fecha: 2021-09-23
// Descripcion: Programa que toma las medidas para enviar
// --------------------------------------------------------------
#ifndef MEDIDOR_H_INCLUIDO
#define MEDIDOR_H_INCLUIDO

// ------------------------------------------------------
// ------------------------------------------------------
class Medidor {

// .....................................................
// .....................................................
private:

public:

// .....................................................
// constructor
// .....................................................
/**
* Cosntructor de medidor
* constructor()
* 
*/
Medidor(  ) {
} // ()

// .....................................................
// .....................................................
/**
* iniciarMedidor()
* 
*/
void iniciarMedidor() {
// las cosas que no se puedan hacer en el constructor, if any
} // ()

// .....................................................
// .....................................................
/**
* medirCO2() -> N
* 
* @returns N nos devulve la temperatura tomada por el sensor
*/
int medirCO2() {
  //El valor es fijo para poder hacer los TEST automaticos 
	return 235;
} // ()

// .....................................................
// .....................................................
/**
* medirTemperatura() -> Z
* 
* @returns Z nos devulve la temperatura tomada por el sensor
*/
int medirTemperatura() {
  //El valor es fijo para poder hacer los TEST automaticos 
	return -12; // qué frío !
} // ()
	
}; // class

// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
#endif
