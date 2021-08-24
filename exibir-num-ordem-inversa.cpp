#include <iostream>

using namespace std;

int main() {

    system("cls");

    //solicita ao usuário a entrada de 5 números e exibe na tela em ordem inversa da leitura.
	int v[5], i;
	printf("Digite 5 numeros e serao mostrados em ordem inversa:\n");
	for (i=0; i<5; i++) {
		printf("Numero %d: ", i+1);
		scanf("%d", &v[i]);
	}
	printf("\n[ ");
	for (i=4; i>=0; i--) {
		printf("%d ", v[i]);
	}
	printf("]\n\n");





    return 0;
}