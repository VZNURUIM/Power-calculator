//Calculadora de potência.

#include <iostream>
#include <math.h>

using namespace std;

int potencia(int number, int potencia) {
	//X¹²³
	return pow(number, potencia);
}

int main() {
	int number{};
	int power_number{};

	cout << "Digite o numero a ser potenciado: ";
	cin >> number;

	cout << "Digite a Potencia: ";
	cin >> power_number;

	cout << "Resultado: " << potencia(number, power_number);
}
