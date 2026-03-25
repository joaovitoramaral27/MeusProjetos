#include <iostream>
using namespace std;

int main() {
	float tensao;
	float resistencia;
	cout << "Defina a Tensao" << endl;
	cin >> tensao;
	system("cls");
	cout << "Defina a Resistencia" << endl;
	cin >> resistencia;
	system("cls");
	float corrente(tensao / resistencia);
	if (corrente > 1500) {
		cout << "Corrente de Alta Tensao Detectada: " << corrente << endl;
	} else if (corrente == 0) {
		cout << "Corrente Inesistente" << endl;
	} else {
		cout << "Corrente de Baixa Tensao Detectada: " << corrente << endl;
	}
	return 0;
}