#include <iostream>
#include <string>
#include "debitCard.h"
#include "tarjeta.h"

using namespace std;

class adapter
{
	public:
		debitCard adapterTarjetaAdebitcard(tarjeta viejaTarjeta){

			debitCard tarjetaDebito1;
			tarjetaDebito1.setSerial(viejaTarjeta.getSerial());
			tarjetaDebito1.setFechaVto(viejaTarjeta.getFechaVto());
			tarjetaDebito1.setFechaEmision(viejaTarjeta.getFechaEmision());
			return tarjetaDebito1;
		}
	  
};

