#pragma once
#include <iostream>
#include <string>
#include "debitCard.h"
#include <list>
#include <iterator>
using namespace std;


class usuario
{
	private:
		string nombre;
		string apellido;
		int dni;
		list <debitCard> debitcard;

	public:
		void crearUsuario(string nuevoNombre, string nuevoApellido, int nuevoDni) {
			nombre = nuevoNombre;
			apellido = nuevoApellido;
			dni = nuevoDni;
		}

		void agregarDebitCard(debitCard dc) {
			debitcard.push_back(dc);
			
		}

		void quitarDebitCard(debitCard dc) {
			debitcard.remove(dc);
		}

		string getNombre() {
			return nombre;
		}

		string getApellido() {
			return apellido;
		}

		int getDni() {
			return dni;
		}

		list <debitCard> getDebitCard() {
			return debitcard;
		}
};

