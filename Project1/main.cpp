//Pryecto => Dependencias de compilacion => Personalizacion de compilacion => masm
#include <iostream>
#include <conio.h>

using namespace std;

extern "C" int ObtenerValorAsm();
void main()
{
	cout << "" << ObtenerValorAsm() << endl;

	_getch();
}