#include "cmath"
#include "TextoPlano.h"
#include "TextoCifrado.h"
#include "Alfabeto.h"
#include "CifradoCesar.h"


CifradoCesar::CifradoCesar(void)
{
}


CifradoCesar::~CifradoCesar(void)
{
}

void CifradoCesar::cifrar(Alfabeto &objAlfabeto, TextoPlano &objTextoPlano, TextoCifrado &objTextoCifrado, int desplazamiento){
for (int index = 0; index < objTextoPlano.size(); index++){
	if (objAlfabeto.existe(objTextoPlano.caracterEnIndice(index)))
		objTextoCifrado.agregarCaracter(obtenerCaracterDesplazado(objAlfabeto, objTextoPlano.caracterEnIndice(index), desplazamiento));
	else
		objTextoCifrado.agregarCaracter(objTextoPlano.caracterEnIndice(index));
	}
}

char CifradoCesar::obtenerCaracterDesplazado(Alfabeto &alfabeto, char caracterOriginal, int desplazamiento){
	if (alfabeto.indiceDe(caracterOriginal) + desplazamiento >= 0)
		return alfabeto.elementoEn((alfabeto.indiceDe(caracterOriginal) + desplazamiento) % alfabeto.size());
		else if ((alfabeto.indiceDe(caracterOriginal) + desplazamiento) < 0 && (alfabeto.indiceDe(caracterOriginal) + desplazamiento) % alfabeto.size() == 0)
			return alfabeto.elementoEn(0);
        else
			return alfabeto.elementoEn(alfabeto.size() - abs((alfabeto.indiceDe(caracterOriginal) + desplazamiento) % alfabeto.size()));
}
