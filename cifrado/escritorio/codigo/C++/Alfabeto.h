#pragma once
class Alfabeto
{
public:
	Alfabeto(void);
	~Alfabeto(void);

	int size();

    bool existe(char);

    char elementoEn(int);

    int indiceDe(char);
};

