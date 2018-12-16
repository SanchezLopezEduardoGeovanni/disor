#include "iostream"
#pragma once
class TextoPlano
{
public:
	TextoPlano(void);
	~TextoPlano(void);

	int size();
	char caracterEnIndice(int);
	void agregarCaracter(char);
	void agregarTexto(std::string);
	std::string obtenerTexto();
	void vaciar();
};

