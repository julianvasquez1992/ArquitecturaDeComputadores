#include <iostream>
#include <conio.h>

using namespace std;

//extern "C" int ObtenerValorAsm();
extern "C" int factorialSuma(int num1);
extern "C" int factorialSumaloop(int num1);
extern "C" int factorialMulti(short num1);
extern "C" int factorialMultiloop(short num1);
extern "C" long sumar(long num1, long num2);
extern "C" long restar(long num1, long num2);
extern "C" long multiplicar(int num1, int num2);
extern "C" int dividir(short num1, short num2);
extern "C" long sumarpila(long num1, long num2);
void main()
{
	short opcion = 1;

	while (opcion != 0)
	{


		cout << "*********Ingresa la operacion a realizar**********  \n";
		cout << "1) Factorial suma\n";
		cout << "2) Factorial multiplicacion\n";
		cout << "3) Sumar\n";
		cout << "4) Resta\n";
		cout << "5) Multiplicar\n";
		cout << "6) Dividir\n";
		cout << "7) Factorial suma loop\n";
		cout << "8) Factorial multiplicacion loop\n";
		cout << "9) Sumar pila\n";
		cout << "0) Salir\n";
		cout << "***************************************************\n";

		cin >> opcion;
		if (opcion == 1)
		{
			int num = 0;
			cout << "Por favor ingrese el numero: ";
			cin >> num;
			cout << "el valor es: " << factorialSuma(num) << endl;
		}

		if (opcion == 2)
		{
			short num = 0;
			cout << "Por favor ingrese el numero: ";
			cin >> num;
			cout << "el valor es: " << factorialMulti(num) << endl;
		}

		if (opcion == 3)
		{
			long num1 = 0, num2 = 0;

			cout << "Por favor ingrese el numero uno: ";
			cin >> num1;
			cout << "Por favor ingrese el numero dos: ";
			cin >> num2;
			cout << "La suma es: " << sumar(num1, num2) << endl;
		}

		if (opcion == 4)
		{
			long num1 = 0, num2 = 0;

			cout << "Por favor ingrese el numero uno: ";
			cin >> num1;
			cout << "Por favor ingrese el numero dos: ";
			cin >> num2;
			cout << "La resta es: " << restar(num1, num2) << endl;
		}

		if (opcion == 5)
		{
			int num1 = 0, num2 = 0;

			cout << "Por favor ingrese el numero uno: ";
			cin >> num1;
			cout << "Por favor ingrese el numero dos: ";
			cin >> num2;
			cout << "La multiplicacion es: " << multiplicar(num1, num2) << endl;
		}

		if (opcion == 6)
		{
			short num1 = 0, num2 = 0;

			cout << "Por favor ingrese el numero uno: ";
			cin >> num1;
			cout << "Por favor ingrese el numero dos: ";
			cin >> num2;
			cout << "La division es: " << dividir(num1, num2) << endl;
		}
		if (opcion == 7)
		{
			int num = 0;
			cout << "Por favor ingrese el numero: ";
			cin >> num;
			cout << "el valor es: " << factorialSumaloop(num) << endl;
		}
		if (opcion == 8)
		{
			short num = 0;
			cout << "Por favor ingrese el numero: ";
			cin >> num;
			cout << "el valor es: " << factorialMultiloop(num) << endl;
		}
		/*utilizar la función en assembly call  y neg*/
		if (opcion == 9)
		{

			long num1 = 0, num2 = 0;

			cout << "Por favor ingrese el numero uno: ";
			cin >> num1;
			cout << "Por favor ingrese el numero dos: ";
			cin >> num2;
			cout << "La suma es: " << sumar(num1, num2) << endl;
		}
		cout << "Presione cualquier tecla para continuar\n";
		_getch();

	}
}