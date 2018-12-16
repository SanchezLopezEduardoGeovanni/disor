#include "TextoPlano.h"
#include "TextoCifrado.h"
#include "CifradoTInversa.h"


CifradoTInversa::CifradoTInversa(void)
{
}


CifradoTInversa::~CifradoTInversa(void)
{
}

void CifradoTInversa::cifrar(TextoPlano objTextoPlano, TextoCifrado objTextoCifrado){
	for (int indice = objTextoPlano.size()-1; indice >= 0; indice--)
                objTextoCifrado.agregarCaracter(objTextoPlano.caracterEnIndice(indice));
}
