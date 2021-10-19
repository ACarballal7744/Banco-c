#pragma once
#include <iostream>
#include <string>
#include "usuario.h"

using namespace std;

class tarjeta
{
	private:
		int serial;
		string fechaVto;
		string fechaEmision;
		usuario usuarioTarjeta;
	public:
		void setSerial(int nuevaSerial) {
			serial = nuevaSerial;
		}

		void setFechaVto(string nuevaFechaVto) {
			fechaVto = nuevaFechaVto;
		}

		void setFechaEmision(string nuevaFechaEmision) {
			fechaEmision = nuevaFechaEmision;
		}

		void setUsuario(usuario nuevoUsuario) {
			usuarioTarjeta = nuevoUsuario;
		}

		int getSerial() {
			return serial;
		}

		string getFechaVto() {
			return fechaVto;
		}

		string getFechaEmision() {
			return fechaEmision;
		}

		usuario getUsuario() {
			return usuarioTarjeta;
		}

};

