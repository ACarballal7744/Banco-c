#include <iostream>
#include "adapter.h"
#include "tarjeta.h"
#include "debitCard.h"
#include "usuario.h"
#include <list>

using namespace std;

int main() {

	usuario usuarioNuevo;
	list <tarjeta> tarjetasNuevas;
	adapter nuevoAdapter;
	tarjeta tarjetaNueva1;
	tarjeta tarjetaNueva2;


		tarjetaNueva1.setSerial(333488);
		tarjetaNueva1.setFechaVto("13/12/2021");
		tarjetaNueva1.setFechaEmision("13/05/2020");

		tarjetaNueva2.setSerial(120054);
		tarjetaNueva2.setFechaVto("10/12/2021");
		tarjetaNueva2.setFechaEmision("13/05/2020");

		tarjetasNuevas.push_back(tarjetaNueva1);
		tarjetasNuevas.push_back(tarjetaNueva2);


		//usuarioNuevo.crearUsuario("Jose", "Perez", 33425889, nuevoAdapter.adapterTarjetaAdebitcard(tarjetaNueva));
	usuarioNuevo.crearUsuario("Jose", "Perez", 33425889);

	for (tarjeta tarjetaVieja : tarjetasNuevas)
	{
		usuarioNuevo.agregarDebitCard(nuevoAdapter.adapterTarjetaAdebitcard(tarjetaVieja));
	}
	for (debitCard tarjetaVieja : usuarioNuevo.getDebitCard())
	{
		cout << tarjetaVieja.getSerial() << endl;
	}



	return 0;
}

