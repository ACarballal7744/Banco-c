#pragma once
#include <iostream>
#include <string>

using namespace std;

class debitCard
{
	private:
		int serial;
		string fechaVto;
		string fechaEmision;
	
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

		int getSerial() {
			return serial;
		}

		string getFechaVto() {
			return fechaVto;
		}

		string getFechaEmision() {
			return fechaEmision;
		}
};

