#include <iostream>
#include <iomanip>
#include <locale.h>
#include <Windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main() {
	
	SetConsoleOutputCP(CP_UTF8);
	
	float real, euro, dolar, convEuro, convDolar;
	
	cout << "Digite o valor em reais: ";
	cin >> real;
	cout << fixed << setprecision(2);
	
	dolar = 5;
	euro = 6;
	
	convDolar = real/dolar;
	convEuro = real/euro;
	
	cout << "Euro: €" << convEuro << endl;
	cout << "Dolar: $" << convDolar;
	
	return 0;
}