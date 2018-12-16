#include "algorithm"
#include "iterator"
#include "Alfabeto.h"

using namespace std;

char alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','�','O','P','Q','R','S','T','U','V','W','X','Y','Z','�','�','�','�','�',
		'a','b','c','d','e','f','g','h','i','j','k','l','m','n','�','o','p','q','r','s','t','u','v','w','x','y','z','�','�','�','�','�'};;

Alfabeto::Alfabeto(void)
{	
}


Alfabeto::~Alfabeto(void)
{
}

int Alfabeto::size(){
	return 64;
}

bool Alfabeto::existe(char caracter){
	return std::find(std::begin(alfabeto), std::end(alfabeto), caracter) != std::end(alfabeto);
}

char Alfabeto::elementoEn(int indice){
	return alfabeto[indice];
}

int Alfabeto::indiceDe(char caracter){
	return find(begin(alfabeto), end(alfabeto), caracter) - begin(alfabeto);
}