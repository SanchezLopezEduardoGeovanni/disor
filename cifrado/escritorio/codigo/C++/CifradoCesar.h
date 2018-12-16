#include "TextoPlano.h"
#include "TextoCifrado.h"
#pragma once
class CifradoCesar
{
public:
	CifradoCesar(void);
	~CifradoCesar(void);

	void cifrar(Alfabeto&, TextoPlano&, TextoCifrado&, int);
	char obtenerCaracterDesplazado(Alfabeto&, char, int);
};

