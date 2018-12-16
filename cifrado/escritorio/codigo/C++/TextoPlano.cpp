#include "iostream"
#include "string"
#include "TextoPlano.h"

using namespace std;

int longitudTextoPlano;
std::string textoPlano;

TextoPlano::TextoPlano(void)
{
	longitudTextoPlano = 0;
	textoPlano = "";
}


TextoPlano::~TextoPlano(void)
{
}

int TextoPlano::size(){
	return longitudTextoPlano;
}

char TextoPlano::caracterEnIndice(int indice){
	return textoPlano.at(indice);
}

void TextoPlano::agregarCaracter(char caracter){
	textoPlano += caracter;
	longitudTextoPlano++;
}

void TextoPlano::agregarTexto(std::string texto){
	textoPlano = texto;
	longitudTextoPlano = texto.length();
}

std::string TextoPlano::obtenerTexto(){
	return textoPlano;
}

void TextoPlano::vaciar(){
	textoPlano = "";
	longitudTextoPlano = 0;
}
