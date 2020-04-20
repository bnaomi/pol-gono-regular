#include <stdlib.h>
#include <iostream>
using namespace std;

#pragma once


class Polreg
{
private:
	int lados;
	double tamlado;
public:
	Polreg(int nlados, double tamanho)
	{
		setLados(nlados);
		setTamlado(tamanho);
		calcperimetro();
		calcangulo();
		calcarea();
	}
	void setLados(int n)
	{
		lados = n;
	}
	void setTamlado(double n)
	{
		tamlado = n;
	}
	void calcperimetro()
	{
		double perimetro = 0;
		perimetro = (lados * tamlado);
		cout << "O perimetro eh de: " << perimetro << " \n";
	}
	//soma dos angulos internos depois divide pelo numero de lados.
	void calcangulo()
	{
		double angulo;
		angulo = ((lados - 2) * 180) / lados;
		cout << "Os angulos internos tem " << angulo << "graus cada \n";
	}
	//não é possivel calcular area de um poligono regular genérico.
	int calcarea()
	{
		return 0;
	}
};
