#include <iostream>

using namespace std;

main() {
	setlocale(LC_ALL, "portuguese");
	int tempc;
	float result;
	string esc;
	
	cout << "Digite sua temperatura em graus Celsius: ";
	cin >> tempc;
	
	cout << "Escolha a sua temperatura: ";
	cin >> esc;
	
	if (esc == "Fahrenheit"){
		result= tempc * 1.8 + 32;
		cout << "\n""A temperatura é de  " << result;
		
	}else if (esc == "Kelvin"){
		result= tempc + 273.15;
		cout << "\n""A temperatura é de " << result;
	}
}

