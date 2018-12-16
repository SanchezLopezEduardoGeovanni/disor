#include "iostream"
#include "TextoCifrado.h"

int longitudTextoCifrado;
std::string textoCifrado;

TextoCifrado::TextoCifrado(void)
{
	longitudTextoCifrado = 0;
	textoCifrado = "";
}


TextoCifrado::~TextoCifrado(void)
{
}

int TextoCifrado::size(){
	return longitudTextoCifrado;
}

char TextoCifrado::caracterEnIndice(int indice){
	return textoCifrado.at(indice);
}

void TextoCifrado::agregarCaracter(char caracter){
	textoCifrado += caracter;
	longitudTextoCifrado++;
}

void TextoCifrado::agregarTexto(std::string texto){
	textoCifrado = texto;
	longitudTextoCifrado = texto.length();
}

std::string TextoCifrado::obtenerTexto(){
	return textoCifrado;
}

void TextoCifrado::vaciar(){
	textoCifrado = "";
	longitudTextoCifrado = 0;
}
