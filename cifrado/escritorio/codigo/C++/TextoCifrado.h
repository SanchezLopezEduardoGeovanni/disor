#include "iostream"
#pragma once
class TextoCifrado
{
public:
	TextoCifrado(void);
	~TextoCifrado(void);

	int size();
	char caracterEnIndice(int);
	void agregarCaracter(char);
	void agregarTexto(std::string);
	std::string obtenerTexto();
	void vaciar();
};

