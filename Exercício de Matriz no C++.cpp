#include <iostream>
using namespace std;

int main() {

/* Esse código cria uma matriz quadrada de
ordem 5 e imprime os números ímpares. */

int mt[5][5] = {
	{6, 9, 3, 0, 0},
	{7, 3, 5, 8, 2},
	{3, 2, 0, 4, 5},
	{0, 1, 5, 3, 2}
};

cout << "Imprimindo a matriz..." << endl;

/* Aqui serão criados dois for. Um para as linhas
da matriz (i) e outro para as colunas (j). */
for (int i = 0; i < 5; i++) {
	for (int j = 0; j < 5; j++) {
		cout << "Matriz[" << i << "] [" << j <<"] = " << mt[i][j] << endl;
	} 
}

cout << endl << "Imprimindo números ímpares" << endl;

/* Para saber se um número é par ou ímpar, basta
ver se o resto de sua divisão por 2 (n % 2) é igual
a 0 ou 1, respectivamente. */

//!= significa "diferente de"

for (int i = 0; i < 5; i++) {
	for (int j = 0; j < 5; j++) {
		if (mt[i][j] % 2 != 0) { 
				cout << "Matriz[" << i <<"] [" << j <<"] = " << mt[i][j] << endl;
		} 
	}
}
	return 0;
}