#include "TextoPlano.h"
#include "TextoCifrado.h"
#include "CifradoTInversaAgrupacion.h"


CifradoTInversaAgrupacion::CifradoTInversaAgrupacion(void)
{
}


CifradoTInversaAgrupacion::~CifradoTInversaAgrupacion(void)
{
}

void CifradoTInversaAgrupacion::cifrar(TextoPlano objTextoPlano, TextoCifrado objTextoCifrado, int groupSize){
	int indice = 0;
	while (groupSize > 0 && indice + groupSize-1 < objTextoPlano.size())
	{
		for (int posicion = indice + groupSize-1; posicion >= indice; posicion--)
			objTextoCifrado.agregarCaracter(objTextoPlano.caracterEnIndice(posicion));
		indice += groupSize;
	}

	while (indice < objTextoPlano.size()) {
		objTextoCifrado.agregarCaracter(objTextoPlano.caracterEnIndice(indice));
		indice++;
	}
}
