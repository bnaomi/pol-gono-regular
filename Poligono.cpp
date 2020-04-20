#include <iostream>
#include "PolReg.h"
#include <stdlib.h>
using std::cout;
using std::cin;

int main()
{
	int lados = 0;
	double tamlados = 0;
	cout << "quantos lados tem o poligono regular? \n";
	cin >> lados;
	cout << "/n qual o tamanho dos lados do poligono regular? \n";
	cin >> tamlados;
	Polreg x(lados, tamlados);
	cout << "segundo poligono";
	cout << "quantos lados tem o poligono regular? \n";
	cin >> lados;
	cout << "\n qual o tamanho dos lados do poligono regular? \n";
	cin >> tamlados;
	Polreg h(lados, tamlados);
	return 0;
}

