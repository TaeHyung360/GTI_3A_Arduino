// -*- mode: c++ -*-

#ifndef LED_H_INCLUIDO
#define LED_H_INCLUIDO

// --------------------------------------------------------------
// Nombre archivo: LED.h
// Autor: Juan Ferrera Sala
// Fecha: 2021-09-23
// Descripcion: Programa que controla el LED
// --------------------------------------------------------------
/**
* tiempo: N -> esperar()
* 
* @param tiempo milisegundos que se espera.
*
*/
void esperar (long tiempo) {
  delay (tiempo);
}

// ----------------------------------------------------------
// ----------------------------------------------------------
class LED {
private:
  int numeroLED;
  bool encendido;
public:
// .........................................................
// .........................................................
/**
* Cosntructor de LED
*
* numero: N -> constructor()
* 
* @param numero numero de LED
*
*/
LED (int numero)
	: numeroLED (numero), encendido(false)
{
pinMode(numeroLED, OUTPUT);
	apagar ();
}
// .........................................................
// .........................................................
/**
* encender()
* 
*/
void encender () {
	digitalWrite(numeroLED, HIGH); 
	encendido = true;
}
// .........................................................
// .........................................................
/**
* apagar()
* 
*/
void apagar () {
	digitalWrite(numeroLED, LOW);
	encendido = false;
}
// .........................................................
// .........................................................
/**
* alternar()
* 
*/
void alternar () {
	if (encendido) {
	  apagar();
	} else {
	  encender ();
	}
} // ()
// .........................................................
// .........................................................
/**
* tiempo: N -> brillar()
* 
* @param tiempo que ha de estar brillando.
*
*/
void brillar (long tiempo) {
  encender ();
  esperar(tiempo); 
	apagar ();
  }
}; // class
// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
#endif
